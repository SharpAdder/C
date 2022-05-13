#include <stdio.h>

int main () {
   char grade = 'B';
   switch(grade) {
      case 'A' :
         printf("%c: Excelent!\n", grade );
      case 'B' :
         printf("%c: Close enough\n", grade );
      case 'C' :
         printf("%c: On the top of gauss hat\n", grade);
      case 'D' :
         printf("%c: Still in school, not for long\n", grade);
      case 'F' :
         printf("%c: you need a job\n", grade);
      default :
         printf("%c: Invalid grade\n", grade);
   }
   return 0;
}




