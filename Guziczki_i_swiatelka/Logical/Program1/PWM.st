
(* TODO: Add your comment here *)
FUNCTION_BLOCK PWM
(*Obliczenie czsów*)
	time_on := REAL_TO_TIME(TIME_TO_REAL(period)*(duty_cycle/100));
	time_off := ABS(INT_TO_TIME(REAL_TO_INT(duty_cycle)- TIME_TO_INT(time_on)));
	(*timery sterujace opuźnionym włączeniem i wyłączeniem PWM*)
	timer_off(IN:=input_PWM AND NOT timer_on.Q,PT:=time_off);
	timer_on(IN:=input_PWM AND timer_off.Q,PT:=time_on);

	IF input_PWM THEN
		IF duty_cycle <=0 THEN
			out := FALSE;
		ELSIF duty_cycle >= 100 THEN
			out := TRUE;
		ELSE 
			out := timer_off.Q;
		END_IF
	ELSE 
		out := FALSE;
	END_IF
END_FUNCTION_BLOCK
