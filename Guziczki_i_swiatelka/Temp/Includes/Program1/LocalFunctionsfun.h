/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _BUR_1773308784_1_
#define _BUR_1773308784_1_

#include <bur/plctypes.h>

/* Datatypes and datatypes of function blocks */
typedef struct PWM
{
	/* VAR_INPUT (analog) */
	float duty_cycle;
	plctime period;
	plctime time_on;
	plctime time_off;
	struct TON timer_on;
	struct TON timer_off;
	/* VAR_OUTPUT (digital) */
	plcbit output_Pwn;
} PWM_typ;



/* Prototyping of functions and function blocks */
void PWM(struct PWM* inst);


__asm__(".section \".plc\"");

/* Used IEC files */
__asm__(".ascii \"iecfile \\\"Logical/Program1/LocalFunctions.fun\\\" scope \\\"local\\\"\\n\"");

/* Exported library functions and function blocks */
#ifdef _PROGRAM1_EXPORT
	__asm__(".ascii \"plcexport \\\"PWM\\\" FUB\\n\"");
#endif

__asm__(".previous");


#endif /* _BUR_1773308784_1_ */

