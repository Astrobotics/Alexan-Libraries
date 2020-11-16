#ifndef ServoControl_h
#define ServoControl_h

#define MotorSensorShieldv1.1

#define HIGHACCURACY
#define counter1resetpin 7
#define counter2resetpin 9
#define deadperiod 18500
#define step 26

//Direct IO for faster access
#if defined(__AVR_ATmega2560__)

#define counter1cntddr	DDRH
#define counter1cntport PORTH
#define counter1cntpin 	PH3
#define counter2cntddr	DDRH
#define counter2cntport PORTH
#define counter2cntpin 	PH5

#else

#define counter1cntddr	DDRD
#define counter1cntport PORTD
#define counter1cntpin 	PORTD6
#define counter2cntddr	DDRB
#define counter2cntport	PORTB
#define counter2cntpin 	PORTB0

#endif

class ServoShield
{
private:
	
public:
	ServoShield();
	int setposition(int servo, int position);
	int setbounds(int servo, int minposition, int maxposition);
	int getposition(int servo);	
	int start();
	int stop();
};

#endif