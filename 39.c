#include <stdio.h>
  int main()
  {
    int n[10];
    int j;
    int greatest;
    printf("Enter ten values:");
    for (j = 0; j < 10; j++) 
    {
    scanf("%d", &n[j]);
    }
   greatest = n[0];
    for (j= 0; j < 10; =j++) 
    {
	if (n[j] > greatest)
  {
	greatest = n[j];
    }
    }
    printf("
    Greatest of ten numbers is %d", greatest);
    return 0;
  }
