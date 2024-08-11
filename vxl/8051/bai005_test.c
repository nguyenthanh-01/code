#include "lib\main.h"

void main() {
    while(true) {
        P0_0 = !P0_0;
        Delay_ms(500);
    }
}
