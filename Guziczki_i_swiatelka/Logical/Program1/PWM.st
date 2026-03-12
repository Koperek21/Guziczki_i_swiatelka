
(* TODO: Add your comment here *)
FUNCTION_BLOCK PWM
(*Obliczenie czsów*)
time_on := REAL_TO_TIME(TIME_TO_REAL(period)*(duty_cycle/100));
time_off := REAL_TO_TIME(  duty_cycle- TIME_TO_REAL(time_on));
(*timery sterujace opuźnionym włączeniem i wyłączeniem PWM*)
	timer_off(IN:= NOT timer_on.Q AND out = TRUE,PT:=time_off);
	timer_on(IN:= timer_off.Q AND out = TRUE,PT:=time_on);
IF timer_on.Q = TRUE THEN
    out:= TRUE;
END_IF;

END_FUNCTION_BLOCK
