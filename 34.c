#include <stdio.h>

int main()
{
   char str[1000], ch;
   int j, freq = 0;
   printf("Enter a string: ");
   gets(str);
   printf("Enter a character: ");
   scanf("%c",&ch);
  for(j = 0; str[j] != '\0'; ++j)
   {
    if(ch == str[i])
     ++freq;
   }
   printf("Freq of %c = %d", ch, freq);
   return 0;
}
