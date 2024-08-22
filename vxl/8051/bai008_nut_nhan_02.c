#include "../lib/at89c52.h"

void main() {
    Led_bit = 0;

    while(1) {
        if(On_Off == 0) {
            Delay_ms(20);
            
            if(On_Off == 0) {
                Led_bit = !Led_bit;
            
                while(On_Off == 0);
            }
        }
    }
}
