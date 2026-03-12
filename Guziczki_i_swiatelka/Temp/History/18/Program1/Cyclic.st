
PROGRAM _CYCLIC
	PWM_1(duty_cycle :=30, period :=T#1s , input_PWM :=input_3 );
IF PWM_1.out THEN
	output_5 := TRUE;
	output_6 := TRUE;
	END_IF;
	
	 
END_PROGRAM
