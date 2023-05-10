#include <avr/io.h>
#include <avr/delay.h>
#include "Std_Types.h"
#include "bits_maths.h"

#define ZERO 0B11000000
#define ONE  0B11111001
#define TWO  0B10100100
#define THREE 0B10110000
#define FOUR 0B10011001
#define FIVE 0B10010010
#define SIX  0B10000010
#define SEVEN  0B11111000
#define EIGHT  0B10000000
#define NINE  0B10010000

 u8 i,j,x,z;
 u8 arr[10]={ONE,TWO,THREE,FOUR,FIVE,SIX,SEVEN,EIGHT,NINE,ZERO};
void Segment (void){
	for(i=0;i<10;i++){
		PORTA=arr[i];
		PORTD=ZERO;

		if (i==9){
			PORTD=ONE;
		}
		_delay_ms(1000);
	}
}
int main (void){
    DDRA=255;
    DDRB=255;
    DDRD=255;



	while(1){





		for(j=0;j<3;j++){
			if (j==1){
				SET_BIT(PORTB,j);
				for(x=0;x<=2;x++){
					PORTA=arr[x];
					PORTD=ZERO;
					_delay_ms(1000);

				}
				CLEAR_BIT(PORTB,j);
				continue;

			}
			SET_BIT(PORTB,j);
			Segment();
			_delay_ms(1000);
			CLEAR_BIT(PORTB,j);

		}











	}


	return 0;
}
