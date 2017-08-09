#include <stdio.h>
int main()
{
 unsigned char character;		
 character=32; 
 while(character<=127){
	printf("%c [%03d] ",character,character);
	character++;
	}
	printf("\n");
	return 0;
}
