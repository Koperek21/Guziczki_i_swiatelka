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

if(((((unsigned long)(unsigned char)input_1==(unsigned long)(unsigned char)0))|(((unsigned long)(unsigned char)input_2==(unsigned long)(unsigned char)0)))){
(work=0);
}


if((work^1)){
(start_delay=0);
}
if((((unsigned long)(unsigned char)work==(unsigned long)(unsigned char)1))){
(start_delay=1);
}

if((((unsigned long)(unsigned char)work==(unsigned long)(unsigned char)0))){
(output_1=0);
(output_2=0);
(output_3=0);
(output_4=0);
(output_5=0);
(output_6=0);
}

(delay.IN=start_delay);;(delay.PT=(2000));;TON(&delay);

if((((unsigned long)(unsigned char)delay.Q==(unsigned long)(unsigned char)1))){
(delay.IN=0);;TON(&delay);
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
}break;case 7:{
(output_6=0);
}break;case 8:{
(output_5=0);
}break;case 9:{
(output_4=0);
}break;case 10:{
(output_3=0);
}break;case 11:{
(output_2=0);
}break;case 12:{
(output_1=0);
(i=0);

}break;}



























}imp1_case6_11:imp1_endcase6_0:;}
#line 99 "C:/Praktyki/Guziczki i swiatelka/Guziczki_i_swiatelka/Logical/Program1/Main.nodebug"
#line 101 "C:/Praktyki/Guziczki i swiatelka/Guziczki_i_swiatelka/Logical/Program1/Main.st"
void _EXIT __BUR__ENTRY_EXIT_FUNCT__(void){{


}}
#line 104 "C:/Praktyki/Guziczki i swiatelka/Guziczki_i_swiatelka/Logical/Program1/Main.nodebug"

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
