#include <regx52.h>
#include <stdbool.h>

sbit LED_PIN = P0^0;

void Delay_ms(int);

void main() {
    while(true) {
        LED_PIN = !LED_PIN;
        Delay_ms(500);
    }
}

void Delay_ms(int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < 123; j++);
    }
}
