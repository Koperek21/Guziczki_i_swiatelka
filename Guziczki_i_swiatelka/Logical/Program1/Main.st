
PROGRAM _INIT
	delay_1(IN :=start_delay,PT := T#1s,Q :=output_1);
	delay_2(IN :=output_1,PT := T#1s,Q :=output_2);
	delay_3(IN :=output_2,PT := T#1s,Q :=output_3);
	delay_4(IN :=output_3,PT := T#1s,Q :=output_4);
	delay_5(IN :=output_4,PT := T#1s,Q :=output_5);
	delay_6(IN :=output_5,PT := T#1s,Q :=output_6);
	
END_PROGRAM

PROGRAM _CYCLIC
	IF input_1 AND input_2 THEN
		
		start_delay := TRUE;
	END_IF
	

END_PROGRAM

PROGRAM _EXIT
	(* Insert code here *)
	 
END_PROGRAM
