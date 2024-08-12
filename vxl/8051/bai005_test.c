#include "lib/at89s52.h"

void main() {
    while(true) {
        P0_0 = !P0_0;
        Delay_ms(500);
    }
}
