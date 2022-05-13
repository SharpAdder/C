#include <stdio.h>

int main()
{
   float a = 1.1;
   float b = 2.2;

   float c = a + b; //= 3.3

   float d = (int) (a + b); //= int(3.3) ->3

   float e = (int) a + b; //= int(a)+b -> 1+2.2 ->3.2

   printf ("c is: %f\n", c);
   printf ("d is: %f\n", d);
   printf ("e is: %f\n", e);
   return 0;
}

