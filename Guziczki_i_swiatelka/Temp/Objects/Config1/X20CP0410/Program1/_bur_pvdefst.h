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
_BUR_LOCAL struct TON delay_on;
_BUR_LOCAL struct TON delay_off;
_BUR_LOCAL signed short i;
_BUR_LOCAL plcbit start_delay;
_BUR_LOCAL plcbit end_delay;
_BUR_LOCAL signed short j;
_BUR_LOCAL plcbit work;
