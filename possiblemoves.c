#include def.h

// start of possiblemoves
Move* possiblemoves(char* board){
char tomove = *(board+64);
Move* settomove = malloc(32*sizeof(char));
char validcounter=0;
char activesize=32;


switch (tomove){
case 0: //white to move, begin from low
for(int i=0; i<64; i++){
char lookedat = *(board+i);


switch(lookedat){

case 0: continue;

case 1: Move pawn; pawn.from = i; pawn.to = i+8;




case 2: // if( i<8 || i>=56 || (i%8)== 0 || (i%8)==7  ){  } //checking edge //knight

/*  if((i%8)<2){ //knight at least 2 right of left edge.
if(i>=56){ Move leftdown; leftdown.from = lookedat; leftdown.to = lookedat-10;
validcounter++; if(validcounter>=activesize){realloc(settomove,2*activesize);} *(settomove+validcounter)= leftdown;}  //leftdown
if(i<8){ Move leftup; leftup.from = lookedat; leftup.to = lookedat+6;
validcounter++; if(validcounter>=activesize){realloc(settomove,2*activesize);} *(settomove+validcounter)= leftup;} //leftup
}//end of knight at least 2 right of left edge.


if((i%8)<1){ //knight at least 1 right of left edge.
if(i>=56){ Move leftdown; leftdown.from = lookedat; leftdown.to = lookedat-10;
validcounter++; if(validcounter>=activesize){realloc(settomove,2*activesize);} *(settomove+validcounter)= leftdown;}  //leftdown
if(i<8){ Move leftup; leftup.from = lookedat; leftup.to = lookedat+6;
validcounter++; if(validcounter>=activesize){realloc(settomove,2*activesize);} *(settomove+validcounter)= leftup;} //leftup
}//end of knight at least 1 right of left edge.                            */


switch(i){ //find out posiiton on board


case 0: if(validcounter+2>=activesize){realloc(settomove,2*activesize);
 Move upright; upright.from = i; upright.to = i+17;*(settomove+validcounter)=upright; validcounter++;
 Move rightup; rightup.from = i; rightup.to = i+10;*(settomove+validcounter)=rightup; validcounter++;

case 1: if(validcounter+3>=activesize){realloc(settomove,2*activesize);
 Move upright; upright.from = i; upright.to = i+17;*(settomove+validcounter)=upright; validcounter++;
 Move rightup; rightup.from = i; rightup.to = i+10;*(settomove+validcounter)=rightup; validcounter++;
 Move upleft; upleft.from = i; upleft.to = i+15;*(settomove+validcounter)=upleft; validcounter++;

case 2:
case 3:
case 4:
case 5:if(validcounter+4>=activesize){realloc(settomove,2*activesize);
 Move upright; upright.from = i; upright.to = i+17;*(settomove+validcounter)=upright; validcounter++;
 Move rightup; rightup.from = i; rightup.to = i+10;*(settomove+validcounter)=rightup; validcounter++;
 Move upleft; upleft.from = i; upleft.to = i+15;*(settomove+validcounter)=upleft; validcounter++;
 Move leftup; leftup.from = i; leftup.to = i+6;*(settomove+validcounter)=leftup; validcounter++;

case 6:if(validcounter+3>=activesize){realloc(settomove,2*activesize);
 Move upright; upright.from = i; upright.to = i+17;*(settomove+validcounter)=upright; validcounter++;
 Move upleft; upleft.from = i; upleft.to = i+15;*(settomove+validcounter)=upleft; validcounter++;
 Move leftup; leftup.from = i; leftup.to = i+6;*(settomove+validcounter)=leftup; validcounter++;

case 7:if(validcounter+2>=activesize){realloc(settomove,2*activesize);
 Move upleft; upleft.from = i; upleft.to = i+15;*(settomove+validcounter)=upleft; validcounter++;
 Move leftup; leftup.from = i; leftup.to = i+6;*(settomove+validcounter)=leftup; validcounter++;

case 8:if(validcounter+3>=activesize){realloc(settomove,2*activesize);
 Move upright; upright.from = i; upright.to = i+17;*(settomove+validcounter)=upright; validcounter++;
 Move rightup; rightup.from = i; rightup.to = i+10;*(settomove+validcounter)=rightup; validcounter++;
 Move rightdown; rightdown.from = i; rightdown.to = i-6;*(settomove+validcounter)=rightdown; validcounter++;

case 9:if(validcounter+4>=activesize){realloc(settomove,2*activesize);
 Move upleft; upleft.from = i; upleft.to = i+15;*(settomove+validcounter)=upleft; validcounter++;
 Move upright; upright.from = i; upright.to = i+17;*(settomove+validcounter)=upright; validcounter++;
 Move rightup; rightup.from = i; rightup.to = i+10;*(settomove+validcounter)=rightup; validcounter++;
 Move rightdown; rightdown.from = i; rightdown.to = i-6;*(settomove+validcounter)=rightdown; validcounter++;

case 10:
case 11:
case 12:
case 13:if(validcounter+6>=activesize){realloc(settomove,2*activesize);
 Move leftdown; leftdown.from = i; leftdown.to = i-10;*(settomove+validcounter)=leftdown; validcounter++;
 Move leftup; leftup.from = i; leftup.to = i+6;*(settomove+validcounter)=leftup; validcounter++;
 Move upleft; upleft.from = i; upleft.to = i+15;*(settomove+validcounter)=upleft; validcounter++;
 Move upright; upright.from = i; upright.to = i+17;*(settomove+validcounter)=upright; validcounter++;
 Move rightup; rightup.from = i; rightup.to = i+10;*(settomove+validcounter)=rightup; validcounter++;
 Move rightdown; rightdown.from = i; rightdown.to = i-6;*(settomove+validcounter)=rightdown; validcounter++;

case 14:if(validcounter+4>=activesize){realloc(settomove,2*activesize);
 Move leftdown; leftdown.from = i; leftdown.to = i-10;*(settomove+validcounter)=leftdown; validcounter++;
 Move leftup; leftup.from = i; leftup.to = i+6;*(settomove+validcounter)=leftup; validcounter++;
 Move upleft; upleft.from = i; upleft.to = i+15;*(settomove+validcounter)=upleft; validcounter++;
 Move upright; upright.from = i; upright.to = i+17;*(settomove+validcounter)=upright; validcounter++;

case 15:if(validcounter+3>=activesize){realloc(settomove,2*activesize);
 Move leftdown; leftdown.from = i; leftdown.to = i-10;*(settomove+validcounter)=leftdown; validcounter++;
 Move leftup; leftup.from = i; leftup.to = i+6;*(settomove+validcounter)=leftup; validcounter++;
 Move upleft; upleft.from = i; upleft.to = i+15;*(settomove+validcounter)=upleft; validcounter++;

case 16:
case 24:
case 32:
case 40:if(validcounter+4>=activesize){realloc(settomove,2*activesize);
 Move upright; upright.from = i; upright.to = i+17;*(settomove+validcounter)=upright; validcounter++;
 Move rightup; rightup.from = i; rightup.to = i+10;*(settomove+validcounter)=rightup; validcounter++;
 Move rightdown; rightdown.from = i; rightdown.to = i-6;*(settomove+validcounter)=rightdown; validcounter++;
 Move downright; downright.from = i; downright.to = i-15;*(settomove+validcounter)=downright; validcounter++;

case 17:
case 25:
case 33:
case 41:if(validcounter+6>=activesize){realloc(settomove,2*activesize);
 Move upleft; upleft.from = i; upleft.to = i+15;*(settomove+validcounter)=upleft; validcounter++;
 Move upright; upright.from = i; upright.to = i+17;*(settomove+validcounter)=upright; validcounter++;
 Move rightup; rightup.from = i; rightup.to = i+10;*(settomove+validcounter)=rightup; validcounter++;
 Move rightdown; rightdown.from = i; rightdown.to = i-6;*(settomove+validcounter)=rightdown; validcounter++;
 Move downright; downright.from = i; downright.to = i-15;*(settomove+validcounter)=downright; validcounter++;
 Move downleft; downleft.from = i; downleft.to = i-17; *(settomove+validcounter)=downleft; validcounter++;

case 22:
case 30:
case 38:
case 46:if(validcounter+6>=activesize){realloc(settomove,2*activesize);
Move leftdown; leftdown.from = i; leftdown.to = i-10;*(settomove+validcounter)=leftdown; validcounter++;
 Move leftup; leftup.from = i; leftup.to = i+6;*(settomove+validcounter)=leftup; validcounter++;
 Move upleft; upleft.from = i; upleft.to = i+15;*(settomove+validcounter)=upleft; validcounter++;
 Move upright; upright.from = i; upright.to = i+17;*(settomove+validcounter)=upright; validcounter++;
 Move downright; downright.from = i; downright.to = i-15;*(settomove+validcounter)=downright; validcounter++;
 Move downleft; downleft.from = i; downleft.to = i-17; *(settomove+validcounter)=downleft; validcounter++;


case 23:
case 31:
case 39:
case 47:if(validcounter+4>=activesize){realloc(settomove,2*activesize);
Move leftdown; leftdown.from = i; leftdown.to = i-10;*(settomove+validcounter)=leftdown; validcounter++;
 Move leftup; leftup.from = i; leftup.to = i+6;*(settomove+validcounter)=leftup; validcounter++;
 Move upleft; upleft.from = i; upleft.to = i+15;*(settomove+validcounter)=upleft; validcounter++;
 Move downleft; downleft.from = i; downleft.to = i-17; *(settomove+validcounter)=downleft; validcounter++;


case 48:if(validcounter+3>=activesize){realloc(settomove,2*activesize);
 Move rightup; rightup.from = i; rightup.to = i+10;*(settomove+validcounter)=rightup; validcounter++;
 Move rightdown; rightdown.from = i; rightdown.to = i-6;*(settomove+validcounter)=rightdown; validcounter++;
 Move downright; downright.from = i; downright.to = i-15;*(settomove+validcounter)=downright; validcounter++;

case 49: if(validcounter+4>=activesize){realloc(settomove,2*activesize);
 Move rightup; rightup.from = i; rightup.to = i+10;*(settomove+validcounter)=rightup; validcounter++;
 Move rightdown; rightdown.from = i; rightdown.to = i-6;*(settomove+validcounter)=rightdown; validcounter++;
 Move downright; downright.from = i; downright.to = i-15;*(settomove+validcounter)=downright; validcounter++;
 Move downleft; downleft.from = i; downleft.to = i-17; *(settomove+validcounter)=downleft; validcounter++;

case 54:if(validcounter+4>=activesize){realloc(settomove,2*activesize);
Move leftdown; leftdown.from = i; leftdown.to = i-10;*(settomove+validcounter)=leftdown; validcounter++;
 Move leftup; leftup.from = i; leftup.to = i+6;*(settomove+validcounter)=leftup; validcounter++;++;
 Move downright; downright.from = i; downright.to = i-15;*(settomove+validcounter)=downright; validcounter++;
 Move downleft; downleft.from = i; downleft.to = i-17; *(settomove+validcounter)=downleft; validcounter++;

case 55:if(validcounter+3>=activesize){realloc(settomove,2*activesize);
Move leftdown; leftdown.from = i; leftdown.to = i-10;*(settomove+validcounter)=leftdown; validcounter++;
 Move leftup; leftup.from = i; leftup.to = i+6;*(settomove+validcounter)=leftup; validcounter++;
 Move downleft; downleft.from = i; downleft.to = i-17; *(settomove+validcounter)=downleft; validcounter++;

case 56:if(validcounter+2>=activesize){realloc(settomove,2*activesize);
 Move rightdown; rightdown.from = i; rightdown.to = i-6;*(settomove+validcounter)=rightdown; validcounter++;
 Move downright; downright.from = i; downright.to = i-15;*(settomove+validcounter)=downright; validcounter++;

case 57:if(validcounter+3>=activesize){realloc(settomove,2*activesize);
 Move rightdown; rightdown.from = i; rightdown.to = i-6;*(settomove+validcounter)=rightdown; validcounter++;
 Move downright; downright.from = i; downright.to = i-15;*(settomove+validcounter)=downright; validcounter++;
 Move downleft; downleft.from = i; downleft.to = i-17; *(settomove+validcounter)=downleft; validcounter++;

case 62:if(validcounter+3>=activesize){realloc(settomove,2*activesize);
Move leftdown; leftdown.from = i; leftdown.to = i-10;*(settomove+validcounter)=leftdown; validcounter++;
 Move downright; downright.from = i; downright.to = i-15;*(settomove+validcounter)=downright; validcounter++;
 Move downleft; downleft.from = i; downleft.to = i-17; *(settomove+validcounter)=downleft; validcounter++;

case 63:if(validcounter+2>=activesize){realloc(settomove,2*activesize);
Move leftdown; leftdown.from = i; leftdown.to = i-10;*(settomove+validcounter)=leftdown; validcounter++;
 Move downleft; downleft.from = i; downleft.to = i-17; *(settomove+validcounter)=downleft; validcounter++;

case 18:
case 19:
case 20:
case 21:
case 26:
case 27:
case 28:
case 29:
case 34:
case 35:
case 36:
case 37:
case 42:
case 43:
case 44:
case 45: if(validcounter+8>=activesize){realloc(settomove,2*activesize);
Move leftdown; leftdown.from = i; leftdown.to = i-10;*(settomove+validcounter)=leftdown; validcounter++;
 Move leftup; leftup.from = i; leftup.to = i+6;*(settomove+validcounter)=leftup; validcounter++;
 Move upleft; upleft.from = i; upleft.to = i+15;*(settomove+validcounter)=upleft; validcounter++;
 Move upright; upright.from = i; upright.to = i+17;*(settomove+validcounter)=upright; validcounter++;
 Move rightup; rightup.from = i; rightup.to = i+10;*(settomove+validcounter)=rightup; validcounter++;
 Move rightdown; rightdown.from = i; rightdown.to = i-6;*(settomove+validcounter)=rightdown; validcounter++;
 Move downright; downright.from = i; downright.to = i-15;*(settomove+validcounter)=downright; validcounter++;
 Move downleft; downleft.from = i; downleft.to = i-17; *(settomove+validcounter)=downleft; validcounter++;



} // end of the switch in case 2: knight





case 3: // bishop
for(){}



case 5: // rook



case 9:


}//end of switch lookedat

}//end of switching between board contents


}//end of for loop case white to move

}//end of switch()tomove

}// end of possiblemoves
