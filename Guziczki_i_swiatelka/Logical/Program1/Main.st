
PROGRAM _INIT

	
	
	
END_PROGRAM

PROGRAM _CYCLIC
	
	IF input_1 AND input_2 THEN
		
		work := TRUE;
	END_IF
	
	IF NOT work THEN
		start_delay :=FALSE;
		end_delay := FALSE;
	END_IF;
	IF work THEN
		start_delay;
	END_IF;
	
	IF work = FALSE THEN
		output_1 := FALSE;
		output_2 := FALSE;
		output_3 := FALSE;
		output_4 := FALSE;
		output_5 := FALSE;
		output_6 := FALSE;
	END_IF;
	
	delay_on(IN :=start_delay,PT := T#1s);//zagarek do w³anczania
	
	IF delay_on.Q AND delay_off.Q = FALSE THEN
		delay_on(IN := start_delay);
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
			i:=0;

	END_CASE; 
	
	IF output_6 THEN
		end_delay := TRUE;
		
	END_IF;
	
	delay_off(IN :=end_delay,PT :=T#1s);//zagarek do wy³anczania
	
	IF delay_off.Q AND delay_on.Q = FALSE THEN
		delay_off(IN:=TRUE);
		j := j+1;
	END_IF;
	
	CASE j OF//case do w³anczania
		1:
			output_6 := FALSE;
		2:
			output_5 := FALSE;
		3:
			output_4 := FALSE;
		4:
			output_3 := FALSE;
		5:
			output_2 := FALSE;
		6:
			output_1 := FALSE;
			j := 0;

	END_CASE;
	
	//	output_2 := INT_TO_BOOL(i/3);

END_PROGRAM

PROGRAM _EXIT
	(* Insert code here *)
	 
END_PROGRAM
