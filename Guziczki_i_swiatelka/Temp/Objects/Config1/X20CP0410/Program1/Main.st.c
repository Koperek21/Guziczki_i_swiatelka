#ifndef _DEFAULT_INCLUDES
#define _DEFAULT_INCLUDES
#endif
#include <bur\plctypes.h>
#include "C:/Praktyki/Guziczki i swiatelka/Guziczki_i_swiatelka/Temp/Objects/Config1/X20CP0410/Program1/Mainst.h"
#line 1 "C:/Praktyki/Guziczki i swiatelka/Guziczki_i_swiatelka/Logical/Program1/Main.nodebug"
#line 2 "C:/Praktyki/Guziczki i swiatelka/Guziczki_i_swiatelka/Logical/Program1/Main.st"
void __BUR__ENTRY_INIT_FUNCT__(void){{




}}
#line 7 "C:/Praktyki/Guziczki i swiatelka/Guziczki_i_swiatelka/Logical/Program1/Main.nodebug"
#line 9 "C:/Praktyki/Guziczki i swiatelka/Guziczki_i_swiatelka/Logical/Program1/Main.st"
void _CYCLIC __BUR__ENTRY_CYCLIC_FUNCT__(void){{

if((input_1&input_2)){

(work=1);
}

if((work^1)){
(start_delay=0);
(end_delay=0);
}
if(work){
*((char volatile*)&(start_delay)) = *((char*)&(start_delay));
}

if((((unsigned long)(unsigned char)work==(unsigned long)(unsigned char)0))){
(output_1=0);
(output_2=0);
(output_3=0);
(output_4=0);
(output_5=0);
(output_6=0);
}

(delay_on.IN=start_delay);;(delay_on.PT=(1000));;TON(&delay_on);

if((delay_on.Q&(((unsigned long)(unsigned char)delay_off.Q==(unsigned long)(unsigned char)0)))){
(delay_on.IN=start_delay);;TON(&delay_on);
(i=(i+1));
}

switch(i){
case 1:{
(output_1=1);
}break;case 2:{
(output_2=1);
}break;case 3:{
(output_3=1);
}break;case 4:{
(output_4=1);
}break;case 5:{
(output_5=1);
}break;case 6:{
(output_6=1);
(i=0);

}break;}

if(output_6){
(end_delay=1);

}

(delay_off.IN=end_delay);;(delay_off.PT=(1000));;TON(&delay_off);

if((delay_off.Q&(((unsigned long)(unsigned char)delay_on.Q==(unsigned long)(unsigned char)0)))){
(delay_off.IN=1);;TON(&delay_off);
(j=(j+1));
}

switch(j){
case 1:{
(output_6=0);
}break;case 2:{
(output_5=0);
}break;case 3:{
(output_4=0);
}break;case 4:{
(output_3=0);
}break;case 5:{
(output_2=0);
}break;case 6:{
(output_1=0);
(j=0);

}break;}



}imp1_case8_5:imp1_endcase8_0:;}
#line 88 "C:/Praktyki/Guziczki i swiatelka/Guziczki_i_swiatelka/Logical/Program1/Main.nodebug"
#line 90 "C:/Praktyki/Guziczki i swiatelka/Guziczki_i_swiatelka/Logical/Program1/Main.st"
void _EXIT __BUR__ENTRY_EXIT_FUNCT__(void){{


}}
#line 93 "C:/Praktyki/Guziczki i swiatelka/Guziczki_i_swiatelka/Logical/Program1/Main.nodebug"

void __AS__ImplInitMain_st(void){__BUR__ENTRY_INIT_FUNCT__();}

__asm__(".section \".plc\"");
__asm__(".ascii \"iecfile \\\"Logical/Global.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/operator/operator.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/runtime/runtime.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsIecCon/AsIecCon.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/standard/standard.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/operator/operator.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/runtime/runtime.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsIecCon/AsIecCon.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/standard/standard.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Global.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/operator/operator.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/runtime/runtime.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsIecCon/AsIecCon.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/standard/standard.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Program1/Types.typ\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Program1/Variables.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"C:/Praktyki/Guziczki i swiatelka/Guziczki_i_swiatelka/Temp/Objects/Config1/X20CP0410/Program1/Main.st.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".previous");

__asm__(".section \".plciec\"");
__asm__(".ascii \"plcdata_const 'start_delay'\\n\"");
__asm__(".previous");
