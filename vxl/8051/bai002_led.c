#include <regx52.h>

void Delay_ms(int);

void main() {
    while(1) {
        P0 = 0;
        Delay_ms(500);

        P0 = 0xFF;
        Delay_ms(500);

        P0 = 0x0F;
        Delay_ms(500);

        P0 = 0xF0;
        Delay_ms(500);

        P0 = 0x55;
        Delay_ms(500);

        P0 = 0xAA;
        Delay_ms(500);
    }
}

void Delay_ms(int n) {
    int i, j;
    for(i = 0; i < n; i++) {
        for(j = 0; j < 123; j++);
    }
}
