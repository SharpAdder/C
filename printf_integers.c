
#include <stdio.h>

int main()
{
    char a = 112;
    int b = 12345;
    long int c = 543432345245;

    //integer
    printf ("%d\n", a);
    
    // Character
    printf ("%c\n", a);
    
    //integer 
    printf ("%d\n", b);
    
    //integer size -> long double 
    printf ("%ld\n", c);
    
    //integer with 12 digits
    printf ("%12d\n", b);
    
    //integer with 12 digits and 0 added  
    printf ("%012d\n", b); 
    
    //integer with 10 digits as param.
    printf ("%*d\n",10, b); 
    return 0;
}


