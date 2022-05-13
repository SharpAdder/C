#include <stdio.h>


int main()
{
   int sum=0, count=1, number=0, tmp=0;
   float avg;
   printf("give me number\n");
   scanf("%d",&number);
   while (count < number+1) {
       printf("#number: %d\n", count);
       scanf ("%d",&tmp);
       sum = sum + tmp;
       avg = (float)sum / count;
       count = count+1;
   }

    printf("average: %f\n",avg);
    return 0;
}





