#include <stdio.h>
 
int main()
{
char    str[100];
int countDigits,countAlphabet,countSpecialChar,countSpaces;
int char;
countDigits=countAlphabet=countSpecialChar=countSpaces=0;
printf("Enter a string: ");
gets(str);
for(char=0;str[char]!=NULL;char++)
    {
          if(str[char]>='0' && str[char]<='9')
            countDigits++;
           else if((str[char]>='A' && str[char]<='Z')||(str[char]>='a' && str[char]<='z'))
            countAlphabet++;
        else if(str[char]==' ')
            countSpaces++;
        else
            countSpecialChar++;
    }
 
    printf("\nDigits: %d \nAlphabets: %d \nSpaces: %d \nSpecial Characters: %d",countDigits,countAlphabet,countSpaces,countSpecialChar);
 
    return 0;
}
