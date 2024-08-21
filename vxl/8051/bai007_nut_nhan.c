#include "../lib/at89c52.h"

sbit On = P1^0;
sbit Off = P1^1;
sbit Led = P2^0;

void main() {
    Led = 0;

    while(1) {
        if(On == 0) {
            Led = 1;
        }
        if(Off == 0) {
            Led = 0;
        }
    }
}
