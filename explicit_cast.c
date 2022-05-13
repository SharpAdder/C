#include <stdio.h>

int main() {

   float a = 3.12345;
   float b = 7.72213;
   float c = 9.51434;

   printf("sum is : %f\n", (a + b + c) ); // = 20.359921
   printf("sum is : %d\n", (int)(a + b + c) ); // = int(20.359921) = 20
   printf("sum is : %d\n", (int)a + (int)b + (int)c );// 3+7+9=19

   return 0;
}


