#ifndef _DEFAULT_INCLUDES
#define _DEFAULT_INCLUDES
#endif
#include <bur\plctypes.h>
#include "C:/Praktyki/Guziczki i swiatelka/Guziczki_i_swiatelka/Temp/Objects/Config1/X20CP0410/Program1/Mainst.h"
#line 1 "C:/Praktyki/Guziczki i swiatelka/Guziczki_i_swiatelka/Logical/Program1/Main.nodebug"
#line 2 "C:/Praktyki/Guziczki i swiatelka/Guziczki_i_swiatelka/Logical/Program1/Main.st"
void __BUR__ENTRY_INIT_FUNCT__(void){{
(delay_1.IN=output_1);;(delay_1.PT=(1000));;TON(&delay_1);

}}
#line 5 "C:/Praktyki/Guziczki i swiatelka/Guziczki_i_swiatelka/Logical/Program1/Main.nodebug"
#line 7 "C:/Praktyki/Guziczki i swiatelka/Guziczki_i_swiatelka/Logical/Program1/Main.st"
void _CYCLIC __BUR__ENTRY_CYCLIC_FUNCT__(void){{
if((input_1&input_2)){

(start_delay=1);
}


}imp1_else0_0:imp1_end0_0:;}
#line 14 "C:/Praktyki/Guziczki i swiatelka/Guziczki_i_swiatelka/Logical/Program1/Main.nodebug"
#line 16 "C:/Praktyki/Guziczki i swiatelka/Guziczki_i_swiatelka/Logical/Program1/Main.st"
void _EXIT __BUR__ENTRY_EXIT_FUNCT__(void){{


}}
#line 19 "C:/Praktyki/Guziczki i swiatelka/Guziczki_i_swiatelka/Logical/Program1/Main.nodebug"

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
