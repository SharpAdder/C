#include <stdio.h>

int main() {

   int a = 17, b = 5;
   double c;

    //no casting -> int
   c = a / b;
   printf("Result is: %f\n", c );
   
   //type casting -> float
   c = (double) a / b;
   printf("Result is: %f\n", c );

   return 0;
}
