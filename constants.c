

#include <stdio.h>

int main() {

 const int a = 20;
 const int b = 10;
 const int c = 15;
 const int d = 5;
 int e;

 e = a + b * c / d;      // 20 +  15
 printf("a is: %d\n",  a );
 printf("b is: %d\n",  b );
 printf("c is: %d\n",  c );
 printf("d is: %d\n",  d );
 printf("Value of: a + b * c / d is: %d\n",  e );

  return 0;
}


