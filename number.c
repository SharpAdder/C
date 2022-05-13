
#include <stdio.h>

int main()
{
    int number;
    printf("insert a number\n");
    scanf("%i",&number);

    if (number > 0) {
        printf("Your number is greater than zero\n");
    } else {
        printf("Your number is less than zero\n");
    }
    return 0;
}




