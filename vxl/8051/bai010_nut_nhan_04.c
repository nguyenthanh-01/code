#include "../lib/at89c52.h"

int Delay_Off(int);

void main() {
    while(1) {
        Led_pos = 0;
        
        do {
            Led_pos = ~Led_pos;
        } while(Delay_Off(1000));
        
        Led_pos = 0xF0;
        
        do {
            Led_pos = ~Led_pos;
        } while(Delay_Off(1000));
        
        Led_pos = 0xAA;
        
        do {
            Led_pos = ~Led_pos;
        } while(Delay_Off(1000));
    }
}

int Delay_Off(int n) {
    int i;
    n /= 10;

    for(i = 0; i < n; i++) {
        Delay_ms(10);
        
        if(On_Off == 0) {
            Delay_ms(20);
            
            while(On_Off == 0);
            
            return 0;
        }
    }

    return 1;
}
