#include <regx52.h>

sbit LED_PIN = P0^0;

void Delay_ms(int);

void main() {
    while(1) {
        LED_PIN = !LED_PIN;
        Delay_ms(500);
    }
}

void Delay_ms(int n) {
    int i, j;
    for(i = 0; i < n; i++) {
        for(j = 0; j < 123; j++);
    }
}
