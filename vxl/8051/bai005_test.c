#include <regx52.h>
#include <stdbool.h>
#include "..\lib\delay.h"

void main() {
    while(true) {
        P0_0 = !P0_0;
        Delay_ms(500);
    }
}