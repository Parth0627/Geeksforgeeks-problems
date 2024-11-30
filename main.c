#include <stdio.h>

int main()
{
    int num,count = 0;
    printf("Enter the number of rows\n");
    scanf("%d",&num);
    
   for (int i = 1;i<=(num*2)-1;i++)
   {
       if (i <= num)
       {
       for (int j = 0;j<num - i;j++)
       {
           printf(" ");
       }
       
       if (i == 1)
       {
           printf("*\n");
       }
       else
       {
       for (int k = 0;k<2;k++)
       {
           printf("*");
           for (int l = 0;l<(i*2)-3;l++)
           {
               printf(" ");
           }
         }
         printf("\n");
        }
     }
     
     else if (i>num)
     {
        for (int j = 0;j<i - num;j++)
        {
            printf(" ");
        }
        
        if (i == (num*2) - 1)
        {
            printf("*\n");
        }
        else
        {
            for (int k = 0;k<2;k++)
            {
                printf("*");
            
            for (int l = (i*2) - num - (4*count) + (num - 7);l>=1;l--)
            {
                printf(" ");
            }
            }
            printf("\n");
            count++;
        }
     }
   }
   
        
    return 0;
}