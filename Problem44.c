#include <stdio.h>

int main()
{
    int num;
    printf("Enter your number\n");
    scanf("%d",&num);
    
   for (int i = 1;i<=num;i++)
   {
       for (int j = 0;j<num - i;j++)
       {
           printf(" ");
       }
       for (int k = i;k<=(i*2)-1;k++)
       {
           printf("%d",k);
       }
       for (int l = (i*2) - 2;l>=i;l--)
       {
           printf("%d",l);
       }
       printf("\n");
   }
        
    return 0;
}
