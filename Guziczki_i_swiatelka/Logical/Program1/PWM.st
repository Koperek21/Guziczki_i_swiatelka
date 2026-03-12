
(* TODO: Add your comment here *)
FUNCTION_BLOCK PWM

time_on := REAL_TO_TIME(TIME_TO_REAL(period)*(duty_cycle/100));
time_off := duty_cycle-time_on;

END_FUNCTION_BLOCK
