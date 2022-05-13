
#include <stdio.h>

int main() {

 #define a 20
 #define b 10
 #define c 15
 #define d 5
 int e;

 e = a + b * c / d;      // 20 +  15
 printf("a: %i\n",  a );
 printf("b: %i\n",  b );
 printf("c: %i\n",  c );
 printf("d: %i\n",  d );
 printf("a + b * c / d = %d\n",  e );
 return 0;
}

