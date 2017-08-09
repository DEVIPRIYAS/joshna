#include <stdio.h>
int main()
{
 int Num1, Num2, j, GCD;
 printf("Please Enter two integer Values \n");
 scanf("%d %d", &Num1, &Num2);
 for(j= 1; j <= Num1 && j <= Num2; j++)
 {
  if(Num1 % j == 0 && Num2 % j == 0)
  GCD = j;
  }
  printf("GCD of %d and %d is = %d", Num1, Num2, GCD);
  return 0;
}
