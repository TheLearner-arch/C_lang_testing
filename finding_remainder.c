#include<stdio.h>
int main()
{
   //By using mathematical formula of finding remainder instead of using the % operator.

   int quotient,dividend,divisor,remainder;
   printf("Enter the DIVIDEND or number to be divided\n");
   scanf("%d", &dividend);
   printf("Enter the DIVISOR  or the number which is divding the dividend\n");
   scanf("%d", &divisor);
   quotient = dividend / divisor;
   remainder = dividend - (divisor * quotient);
   printf("REMAINDER=%d", remainder);
}