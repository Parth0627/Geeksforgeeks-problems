#include <stdio.h>
#include <stdbool.h>

bool isVowel(char c)
{
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
    {
        return true;
    }
    return false;
}

int main()
{
   char c;
   
   printf("Enter your character (in smallcase)\n");
   scanf("%c",&c);
   
   if (isVowel(c))
   {
       printf("%c is a vowel character\n",c);
   }
   else
   {
        printf("%c is not a vowel character\n",c);
   }
   
   
    return 0;
}