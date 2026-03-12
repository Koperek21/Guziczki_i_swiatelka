struct TON
{	plctime PT;
	plctime ET;
	plctime StartTime;
	unsigned long Restart;
	plcbit IN;
	plcbit Q;
	plcbit M;
};
_BUR_PUBLIC void TON(struct TON* inst);
struct PWM
{	float duty_cycle;
	plctime period;
	plctime time_on;
	plctime time_off;
	struct TON timer_on;
	struct TON timer_off;
	plcbit input_PWM;
	plcbit out;
};
void PWM(struct PWM* inst);
_BUR_LOCAL struct TON delay;
_BUR_LOCAL signed short i;
_BUR_LOCAL plcbit start_delay;
_BUR_LOCAL plcbit work;
_BUR_LOCAL struct PWM PWM_1;
