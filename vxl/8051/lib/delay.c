#include "delay.h"
#include "at89s52.h"

#if(Hz == 12000000)
    void Delay_ms(int n) {
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < 123; j++);
        }
    }
    
#elif(Hz == 11059200)
    void Delay_ms(int n) {
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < 113; j++);
        }
    }

#elif(Hz == 8000000)
    void Delay_ms(int n) {
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < 218; j++);
        }
    }
    
#elif(Hz == 4000000)
    void Delay_ms(int n) {
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < 106; j++);
        }
    }
   
#else
    #error "ko co ham delay nao phu hop!"
    
#endif
