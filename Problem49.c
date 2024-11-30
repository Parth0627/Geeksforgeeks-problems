#include <stdio.h>

int main()
{
    int num,count = 1,temp;
    printf("Enter the number of rows\n");
    scanf("%d",&num);
    
   for (int i = 1;i<=num*2-1;i++)
   {
       if (i<num)
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
           for (int k = 0;k<i;k++)
           {
               printf("* ");
           }
           printf("\n");
        }
       }
       
      else if (i == num)
       {
           for (int k = 0;k<2;k++)
           {
           for (int j = 0;j<i;j++)
           {
               printf("* ");
           }
           printf("\n");
           }
       }
     else
       {
           temp = i - (2*count); //using temp as changing the value of i to a lower required value would create a infinite loop
           
           for (int j = 0;j<num - temp;j++)
           {
               printf(" ");
           }
           
           if (temp == 1)
           {
               printf("*\n");
           }
           
           else
           {
               for (int k = 0;k<temp;k++)
               {
                    printf("* ");
               }
               printf("\n");
           }
           count++;
       }
   }
        
    return 0;
}
