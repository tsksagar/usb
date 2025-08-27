#include "difference_of_squares.h"


unsigned int sum_of_squares(unsigned int number);
unsigned int square_of_sum(unsigned int number);
unsigned int difference_of_squares(unsigned int number);

unsigned int sum_of_squares(unsigned int number)
{
  unsigned  int i,j;
j = 0;
    for(i =1;i<=number;i++)
    {
        j = j+(i*i);
    }
    return j;
}
unsigned int square_of_sum(unsigned int number)
{
  unsigned  int i,j;
j = 0;
    for(i =1;i<=number;i++)
    {
        j = j+i;
    }
    return (j*j);
}
unsigned int difference_of_squares(unsigned int number)
{
  unsigned  int i,j,k;
     i = sum_of_squares(number);
     j = square_of_sum(number);
 k = 0;
    if(i > j)
    {
      k = i-j;  
    }
    else
    {

      k = j-i;     
    }
  return k;  
}
