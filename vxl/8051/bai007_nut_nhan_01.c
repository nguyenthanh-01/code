#include "../lib/at89c52.h"

void main() {
    Led_bit = 0;

    while(1) {
        On = 1;
        if(On == 0) {
            Led_bit = 1;
        }
        
        Off = 1;
        if(Off == 0) {
            Led_bit = 0;
        }
    }
}
