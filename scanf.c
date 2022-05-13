
#include <stdio.h>

int main()
{
    int s;
    float b;
    char c;
    printf("Enter an integer number:");
    scanf ("%d", &s);
    printf ("You entered: %d\n",s);
    
    printf("Enter a rational number:");
    scanf ("%f", &b);
    printf ("You entered: %f\n",b);
    
    printf("Enter a character:");
    scanf (" %c", &c);
    printf ("You entered: %c\n",c);
    return 0;
}

