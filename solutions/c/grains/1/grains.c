#include "grains.h"

uint64_t square(uint8_t index);
uint64_t total(void);

uint64_t square(uint8_t index)
{
 uint64_t i,j;
    j = 0;
   // uint64_t k = 0;
    if(index > 0 && index < 65)
    {
    j = 1 ;
    for(i= 1; i<=index; i++ )
    {
            if(i==index && index > 1 )
             j = j/2;
        
      j = j*2; 
        
            if(1==index  )
             j = j/2;
    }
    }

    return j;
} 
uint64_t total(void)
{
 uint64_t i,j;
    //uint64_t k = 0;
    j = 0 ;
    for(i= 1; i<=32; i++ )
    {

       j = j+(1<<(i-1)); 

        
     // if(i==1)
     //  j = 1;   
          
    }
 
    return j;
}  