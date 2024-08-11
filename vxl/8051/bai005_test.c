#include "..\lib\main.h"
// ..\lib\delay.c

void main() {
    while(true) {
        P0_0 = !P0_0;
        Delay_ms(500);
    }
}
