#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

bool isArmstrong(int i)
{
       int num = i;
       int sum = 0;
       char temp1[20];
   sprintf(temp1,"%d",num);
   
   for (int j = 0;j<strlen(temp1);j++)
   {
       int digit = temp1[j] - '0';
       sum = sum + pow(digit,strlen(temp1));
   }
   
   if (sum == num)
   {
       return true;
       
      }
      return false;
}

int main()
{
   int num,lim1,lim2,count = 0,swap;
   
   printf("Enter your first limit\n");
   scanf("%d",&lim1);
   printf("Enter your second limit\n");
   scanf("%d",&lim2);
   
   if (lim1 > lim2)
   {
       swap = lim1;
       lim1 = lim2;
       lim2 = swap;
   }
   
   for (int i = lim1;i<=lim2;i++)
   {
       num = i;
       if(isArmstrong(num))
       {
           printf("%d ",num);
           count++;
       }
  }
  
  if (count == 0)
  {
      printf("No armstrong number is present between the limit you gave\n");
  }
    return 0;
}
