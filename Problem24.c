#include <stdio.h>

float add(float num1,float num2)
{
    return num1 + num2;
}

float substract(float num1,float num2)
{
    return num1 - num2;
}

float multiply(float num1,float num2)
{
    return num1 * num2;
}

float divide(float num1,float num2)
{
    return num1/num2;
}

int main()
{
    int ch;
    float num1,num2;
    do
    {
      printf("1) Add 2 numbers\n");
      printf("2) Substract 2 numbers\n"); 
      printf("3) Multiply 2 numbers\n"); 
      printf("4) Divide 2 numbers\n"); 
      printf("5) Exit\n");   
      scanf("%d",&ch);
    
    switch (ch)
    {
        case 1:
                printf("Enter your first number\n");
                scanf("%f",&num1);
                
                printf("Enter your second number\n");
                scanf("%f",&num2);
                
                printf("%f + %f = %f\n",num1,num2,add(num1,num2));
                break;
                
        case 2:
                printf("Enter your first number\n");
                scanf("%f",&num1);
                
                printf("Enter your second number\n");
                scanf("%f",&num2);
                
                printf("%f - %f = %f\n",num1,num2,substract(num1,num2));
                break;
                
        case 3:
                printf("Enter your first number\n");
                scanf("%f",&num1);
                
                printf("Enter your second number\n");
                scanf("%f",&num2);
                
                printf("%f * %f = %f\n",num1,num2,multiply(num1,num2));
                break;
                
         case 4:
                printf("Enter your first number\n");
                scanf("%f",&num1);
                
                printf("Enter your second number\n");
                scanf("%f",&num2);
                
                if (num2 == 0)
                {
                    printf("Any number divided by 0 is undefined\n");
                }
                else
                {
                printf("%f / %f = %f\n",num1,num2,divide(num1,num2));
                }
                break;
                
        case 5:
                printf("You have exited the program...\n");
                break;
              
        default:
                printf("Invalid Input\n");
    }
  }while (ch != 5);
  
    return 0;
}
