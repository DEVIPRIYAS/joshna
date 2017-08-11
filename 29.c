#include <stdio.h>
void main()
{
long number, temp, digit, sum = 0;
 printf("Enter the number \n");
 scanf("%ld", &number);
 temp = number;
 while (number > 0)
  {
    digit = number % 10;
     sum  = sum + digit;
     number /= 10;
   }
    printf("Given number = %ld\n", temp);
    printf("Sum of the digits %ld = %ld\n", temp, sum);
}
