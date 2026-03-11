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
_BUR_LOCAL struct TON delay_1;
_BUR_LOCAL struct TON delay_2;
_BUR_LOCAL struct TON delay_3;
_BUR_LOCAL struct TON delay_4;
_BUR_LOCAL struct TON delay_5;
_BUR_LOCAL struct TON delay_6;
_BUR_LOCAL plcbit start_delay;
_BUR_LOCAL plcbit end_delay;
