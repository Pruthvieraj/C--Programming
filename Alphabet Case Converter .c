#include <stdio.h>

int main()
{
char acceptedCharacter, convertedCharacter;
printf("Enter a character:");
scanf("%c", &acceptedCharacter);

if(acceptedCharacter>='A' && acceptedCharacter<='Z')
{convertedCharacter= acceptedCharacter +32;
 }
else if(acceptedCharacter>='a' && acceptedCharacter<='z')
{convertedCharacter=acceptedCharacter-32;
}

printf("Accepted Character:%c, Converted Character:%c\n", acceptedCharacter, convertedCharacter);
return 0;
}
