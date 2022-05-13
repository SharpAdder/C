#include <stdio.h>

int main()
{
float a = 10.12;
float b = 26.32;

printf ("\n--------Floating numbers-------------\n");
printf ("a: %f\n", a);
printf ("b: %f\n", b);
printf ("-----------------------\n\n");

printf ("a + b =  %f\n", a + b);
printf ("b - a =  %f\n", b - a);
printf ("a * b =  %f\n", a * b);
printf ("b / a =  %f\n", b / a);
a++;

printf ("a++ =  %f\n", a);
a=10.12; /* initial value */
a--;

printf ("a-- =  %f\n", a);
return 0;
}

