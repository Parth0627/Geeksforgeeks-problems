#include <stdio.h>

int main()
{
    char character;
    
    printf("Enter your character\n");
    scanf("%c",&character);
    
    printf("%d is the ASCII value of %c\n",character,character);
    
    return 0;
}
