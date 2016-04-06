#include "Types.h"
#include "DIO_Private.h"
#include "DIO_config.h"
#include "DIO_interface.h"
#include "DIO-utilites.h"
#include "delay.h"

#include "StepperMotor_Private.h"
#include "StepperMotor_Config.h"
#include "StepperMotor_Interface.h"

int main(void)
{
	u8 i;
	DIO_VoidInit();
	while(1)
	{
		for(i=0;i<4;i++)
		{
			DIO_u8WritePinVal( StepperMotor_u8FirstPin,DIO_u8HIGH );
			Delay_ms(100);
			PORTD=0x00;
			DIO_u8WritePinVal( StepperMotor_u8SecondPin,DIO_u8HIGH );
			Delay_ms(100);
			PORTD=0x00;
			DIO_u8WritePinVal( StepperMotor_u8thirdPin,DIO_u8HIGH );
			Delay_ms(100);
			PORTD=0x00;
			DIO_u8WritePinVal( StepperMotor_u8ForthPin,DIO_u8HIGH );
			Delay_ms(100);
			PORTD=0x00;
		}
	}
return 0;
}
