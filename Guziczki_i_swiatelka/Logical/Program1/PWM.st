
(* TODO: Add your comment here *)
FUNCTION_BLOCK PWM
(*Obliczenie czsów*)
time_on := REAL_TO_TIME(TIME_TO_REAL(period)*(duty_cycle/100));
time_off := duty_cycle-time_on;
(*timery sterujace opuźnionym włączeniem i wyłączeniem PWM*)
timer_on(IN:time_off.Q,PT:time_on)
timer_of(NOT IN:timer_on.Q,PT:time_off)



END_FUNCTION_BLOCK
