#include <stdio.h>

int main()
{
int a = 1;
int b = 0;
int c = 12;
int d = 0;

printf ("\n---------------------\n");
printf ("a =  %d\n", a);
printf ("b =  %d\n", b);
printf ("c =  %d\n", c);
printf ("d =  %d\n", d);

printf ("\n---------&&--------------\n");
printf ("a && b =>  %d\n", (a && b));
printf ("a && c =>  %d\n", (a && c));
printf ("b && d =>  %d\n", (b && d));

printf ("\n----------||-------------\n");
printf ("a || b =>  %d\n", (a || b));
printf ("a || c =>  %d\n", (a || c));
printf ("b || d =>  %d\n", (b || d));

printf ("\n------------! &&----------\n");
printf ("! a || b =>  %d\n", !(a || b));
printf ("! a || c =>  %d\n", !(a || c));
printf ("! b || d =>  %d\n", !(b || d));
return 0;
}


