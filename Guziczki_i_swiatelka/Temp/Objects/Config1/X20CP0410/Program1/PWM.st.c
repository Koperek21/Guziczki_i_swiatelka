#ifndef _DEFAULT_INCLUDES
#define _DEFAULT_INCLUDES
#endif
#include <bur\plctypes.h>
#include "C:/Praktyki/Guziczki i swiatelka/Guziczki_i_swiatelka/Temp/Objects/Config1/X20CP0410/Program1/PWMst.h"
#line 1 "C:/Praktyki/Guziczki i swiatelka/Guziczki_i_swiatelka/Logical/Program1/PWM.nodebug"
#line 3 "C:/Praktyki/Guziczki i swiatelka/Guziczki_i_swiatelka/Logical/Program1/PWM.st"
void PWM(struct PWM* inst){struct PWM* __inst__=inst;{

(__inst__->time_on=(plctime)(((float)__inst__->period*(__inst__->duty_cycle/100))>=0.0?((float)__inst__->period*(__inst__->duty_cycle/100))+0.5:((float)__inst__->period*(__inst__->duty_cycle/100))-0.5));
(__inst__->time_off=((plctime)((signed short)(__inst__->duty_cycle>=0.0?__inst__->duty_cycle+0.5:__inst__->duty_cycle-0.5)-(signed short)__inst__->time_on)<0?-((plctime)((signed short)(__inst__->duty_cycle>=0.0?__inst__->duty_cycle+0.5:__inst__->duty_cycle-0.5)-(signed short)__inst__->time_on)):(plctime)((signed short)(__inst__->duty_cycle>=0.0?__inst__->duty_cycle+0.5:__inst__->duty_cycle-0.5)-(signed short)__inst__->time_on)));

(__inst__->timer_off.IN=(__inst__->input_PWM&(__inst__->timer_on.Q^1)));;(__inst__->timer_off.PT=__inst__->time_off);;TON(&__inst__->timer_off);
(__inst__->timer_on.IN=(__inst__->input_PWM&__inst__->timer_off.Q));;(__inst__->timer_on.PT=__inst__->time_on);;TON(&__inst__->timer_on);

if(__inst__->input_PWM){
if(((__inst__->duty_cycle<=0))){
(__inst__->out=0);
}else if(((__inst__->duty_cycle>=100))){
(__inst__->out=1);
}else{
(__inst__->out=__inst__->timer_off.Q);
}
}else{
(__inst__->out=0);
}
}imp1_end0_0:;}
#line 22 "C:/Praktyki/Guziczki i swiatelka/Guziczki_i_swiatelka/Logical/Program1/PWM.nodebug"

void __AS__ImplInitPWM_st(void){}

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
__asm__(".ascii \"iecfile \\\"Logical/Program1/LocalFunctions.fun\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"C:/Praktyki/Guziczki i swiatelka/Guziczki_i_swiatelka/Temp/Objects/Config1/X20CP0410/Program1/PWM.st.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"plc_iec_localfub \\\"PWM\\\"\\n\"");
__asm__(".previous");
