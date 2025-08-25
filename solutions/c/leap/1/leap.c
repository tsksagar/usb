#include "leap.h"
#include <stdio.h>
//int leapyear( unsigned int a);
int leap_year(unsigned int year);

int leap_year( unsigned int a)
{
    int b = 0;
    if( a % 4 == 0)
    {
        if(a % 100 == 0)
        {
           if(a % 400 == 0) 
           {
               b = 1;
           }
            
        }
        else
        {
            b = 1;
        }
            

    }
return b;        
}

