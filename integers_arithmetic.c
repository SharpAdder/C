#include <stdio.h>

int main()
{
int a = 10;
int b = 26;

printf ("\n--------Integers---------------\n");
printf ("a: %d\n", a);
printf ("b: %d\n", b);

printf ("-----------------------\n\n");
printf ("a + b =  %i\n", a + b);
printf ("a - b =  %i\n", a - b);
printf ("a * b = %i\n", a * b);
printf ("b / a = %i\n", b / a);
printf ("b %% a =  %i\n", b % a);
a++;

printf ("a++ = %i\n", a);
a = 10; /*back to initial value */
a--;
printf ("a-- = %i\n", a);
return 0;
}


