#include <regx52.h>
#include <stdbool.h>

void Delay_ms(int);

void main() {
    while(true) {
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
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < 123; j++);
    }
}
