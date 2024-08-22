#include "../lib/at89c52.h"

#define Led P2

sbit On = P1^0;
sbit Off = P1^1;

void Delay_Off(int);

void main() {
    Led = 0;

    while(1) {
        On = 1;
        if(On == 0) {
            Led = 1;
            Delay_Off(1000);
        }
    }
}

void Delay_Off(int n) {
    int i;
    n /= 10;

    for(i = 0; i < n; i++) {
        Delay_ms(10);

        Off = 1;
        if(Off == 0) {
            Led = 0;
            return;
        }
    }
}
