
PROGRAM _INIT

	
	
	
END_PROGRAM

PROGRAM _CYCLIC
	
	IF input_1 AND input_2 THEN
		
		work := TRUE;
	ELSE 
			work := FALSE;
	END_IF
	

	
	
	IF NOT work THEN
		start_delay :=FALSE;
	END_IF;
	IF work = TRUE THEN
		start_delay := TRUE;
	END_IF;
	
	IF work = FALSE THEN
		output_1 := FALSE;
		output_2 := FALSE;
		output_3 := FALSE;
		output_4 := FALSE;
		output_5 := FALSE;
		output_6 := FALSE;
	END_IF;
	
	delay(IN:=start_delay,PT:= T#2s);//zagarek do w³anczania
	
	IF delay.Q = TRUE THEN
		delay(IN := FALSE);
		i := i+1;
	END_IF;
	
	CASE i OF//case do w³ancznia
		1 : 
			output_1 := TRUE;
		2:
			output_2 := TRUE;
		3:
			output_3 := TRUE;
		4:
			output_4 := TRUE;
		5:
			output_5 := TRUE;
		6:
			output_6 := TRUE;
		7:
			output_6 := FALSE;
		8:
			output_5 := FALSE;
		9:
			output_4 := FALSE;
		10:
			output_3 := FALSE;
		11:
			output_2 := FALSE;
		12:
			output_1 := FALSE;
			i:=0;

	END_CASE; 

	PWM_1(duty_cycle:=30,period:=T#1s,input_PWM:=input_3);
	
	IF PWM_1.out = TRUE THEN
		output_5 := TRUE;
		output_6 := TRUE;
	END_IF;

END_PROGRAM

PROGRAM _EXIT
	(* Insert code here *)
	 
END_PROGRAM
