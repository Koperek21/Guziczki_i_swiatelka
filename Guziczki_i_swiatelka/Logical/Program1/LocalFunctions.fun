
{REDUND_ERROR} {REDUND_UNREPLICABLE} FUNCTION_BLOCK PWM (*TODO: Add your comment here*) (*$GROUP=User,$CAT=User,$GROUPICON=User.png,$CATICON=User.png*)
	VAR_INPUT
		duty_cycle :  REAL;
		period :  TIME := T#1s;
		input_PWM : BOOL;
	END_VAR

	VAR

		time_on : TIME;
		time_off : TIME;
		timer_on : TON;
		timer_off : TON;

	END_VAR

	VAR_OUTPUT
	output_Pwn : BOOL;
	END_VAR

END_FUNCTION_BLOCK
