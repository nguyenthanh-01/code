#include "../lib/at89c52.h"

int Delay_Off(int);

void main() {
    Led_pos = 0;

    while(1) {
        On = 1;
        if(On == 0) {
            do {
                Led_pos = ~Led_pos;
            } while(Delay_Off(1000));
        }
    }
}

int Delay_Off(int n) {
    int i;
    n /= 10;

    for(i = 0; i < n; i++) {
        Delay_ms(10);

        Off = 1;
        if(Off == 0) {
            Led_pos = 0;
            return 0;
        }
    }

    return 1;
}
