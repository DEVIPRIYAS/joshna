#include <stdio.h>
void main()
{
char str[80];
int count, nc = 0, sum = 0;
printf("Enter the string containing both digits and alphabet \n");
scanf("%s", str);
for (count = 0; str[count] != '\0'; count++)
{
if ((str[count] >= '0') && (str[count] <= '9'))
{
nc += 1;
sum += (str[count] - '0');
}
}
printf("NO. of Digits in the str = %d\n", nc);
printf("Sum of all digits = %d\n", sum);
}
