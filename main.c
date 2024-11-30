#include <stdio.h>

int main()
{
    int num;
    char c;
    printf("Enter your character\n");
    scanf("%c",&c);
    printf("Enter the number of rows\n");
    scanf("%d",&num);
    
   for (int i = 1;i<=num;i++)
   {
       for (int j = 0;j<i;j++)
       {
           printf("%c",c);
       }
       printf("\n");
       c++;
   }
   
        
    return 0;
}