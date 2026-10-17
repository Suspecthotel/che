//board has 65 chars, the 64 pieces and 1 more char to indicate who to move.
//Piece values: pawn 1, knight 2, bishop 3, rook 5, queen 9, king 100
// black pieces are white pieces +10
// white tomove=0; black tomove = 1;

#include <stdio.h>
#include <stdlib.h>
#include "possiblemoves.c"
#include "def.h"

typedef struct{
Move move;
char value;
} Suggestion;


char bestmoverec(char* board, char recdepth, Move* move);
Move* bestmove(char* board, char recdepth);
char* boardaftermove(char* board, Move move);
int findlength(Move* moves);
//  Move* possiblemoves(char* board);  //in external file
char calculatevaluedif(char* board);
void display(char* board, int boardsize);
void startingpos(char* board);
int main(int argc, char *argv[]);

//______________________________________________________________________________________________________________________

/*TODO:
1. if recdepth = 0            //done
2. implement Move.value?      //done
3. possiblemoves is wrong.
*/

/* BESTMOVE V1, where I return Move. But recursion hard because of no int to comp. Therefore, goto V2.
// start of bestMove
Move bestmove(char*board, char recdepth){
Move suggested;
char suggestedvalue;

if(recdepth = 0){
calculatevaluedif(board);
} // if rec depth is zero, return fastest.

else{

Move* possibletogo = possiblemoves(board);
for(int i=0; i<findlength(possibletogo); i++){

if( calculatevaluedif(boardaftermove(*board, *(possibletogo+i))) > suggestedvalue){suggested = *(possiblemoves+i);}
}//end of for loop
}//end of else part

}//end of bestmove
*/


//__________________________________________________________________________________________________________________________________

Suggestion bestmoverec(char* board, char recdepth, Move* result){
Suggestion way;
if(recdepth == 0){way.value= calculatevaluedif(boardaftermove); way.move = move; result=way.move; return way;}


Move* tosee = possiblemoves(board);
for(int i=0; i< findlength(tosee); i++){
Suggestion attempt = bestmoverec ( boardaftermove(board, *(tosee+i)), recdepth-1，move ).value;
if(attempt.value > way.value){way = attempt;}
}//end of for loop

}// end of bestmoverec

//___________________________________________________________________________________________________________________________________
Move* bestmove(char* board, char recdepth){
Move* move = malloc(1*sizeof(char));
bestmoverec(board, recdepth, move);
return move;
}
//______________________________________________________________________________________________________________________________________

char* boardaftermove(char* board, Move move){
char piecebefore = *(board+move.from);
*char newboard= malloc(16*sizeof(char));
for(int i=0; i<65; i++){*(newboard+i)=*(board+i);}
*(newboard+move.from) = 0;
*(newboard+move.to) = *(board+move.from);
*(newboard+64)= (*(board+64)+1)%1;
return newboard;
}


//_______________________________________________________________________________________________________________________________

int findlength(Move* moves){
for(int i = 0; i<16; i++){
if(*(moves+i).from == 0){return i;}
}
} // findlength returns amount of possible moves


//___________________________________________________________________________________________________________________________________

//________________________________________________________________________________________________________________________________________


int calculatevaluedif(char* board){ // positive: white has more, negative: black has more
int valuedif = 0;
char whitepiece; //if 0, then it is white piece, if 1, then it is black piece

for(int i=0; i<64; i++){
int piece = *(board+i);
if(piece == 0){continue;}
if((piece/10)%10==1){valuedif = valuedif-piece; valuedif=valuedif+10; } else{valuedif= valuedif+piece;}
}//end of for loop

return valuedif;
}//end of calculatevaluedif


//________________________________________________________________________________________________________________________________________


void display(char* board, int boardsize){
for(int i = 63; i>=0; i--){
printf(" %3i ", *(board+i));
if(i % 8 == 0){printf("\n");}
}//end of for loop
if(board[64]==0){printf("\nwhite to move\n");} else{printf("\nblack to move\n");}
}//end of display


//________________________________________________________________________________________________________________________________________


void startingpos(char* board){
//black: (values always 10 above white)
*(board+63) = 15;
*(board+62) = 12;
*(board+61) = 13;
*(board+60) = 19; // queen
*(board+59) = 110; // king
*(board+58) = 13;
*(board+57) = 12;
*(board+56) = 15;
int pawnbegin = 55;
for(int pawns=0; pawns<8; pawns++){*(board+pawnbegin-pawns) = 11;} // pawns

//white
*(board+0) = 5;
*(board+1) = 2;
*(board+2) = 3;
*(board+3) = 100; // queen
*(board+4) = 9; // king
*(board+5) = 3;
*(board+6) = 2;
*(board+7) = 5;
for(int pawns=8; pawns<=15; pawns++){*(board+pawns) = 1;} // pawns

} // end of Startingpos


//_______________________________________________________________________________________________________________________________________


int main(int argc, char *argv[]){

char* board = calloc(65, sizeof(char)); // FIELDS: 0-7 is reihe 1, 8-15 is reihe 2, etc,  0 ist a, dann 1 = b, dann 2 = c
//IMPORTANT: BOARD HAS ANOTHER CHAR 1 or 0; IT DENOTES WHO TO MOVE

startingpos(board); // set up starting position of board

/* //Sind die Flags
for(int args = 0; args < argc; args++ ){ // read flags

char* currentarg = argv[args];

switch(currentarg){
// case "-p": board = argv[++args];
}//end of switch

}// end of loop for args & end of loop to read flags
*/

display(board, 65);


return 1;
}// end of main
