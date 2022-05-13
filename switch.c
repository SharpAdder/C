#include <stdio.h>

int main () {
   char grade = 'D';
   switch(grade) {
      case 'A' :
         printf("%c: Excelent!\n", grade );
         break;
      case 'B' :
         printf("%c: Close enough\n", grade );
         break;
      case 'C' :
         printf("%c: On the top of gauss hat\n", grade);
         break;
      case 'D' :
         printf("%c: Still in school, not for long\n", grade);
         break;
      case 'F' :
         printf("%c: you need a job\n", grade);
         break;
      default :
         printf("%c: Invalid grade\n", grade);
   }
   return 0;
}




