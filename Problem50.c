#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isReal(float a,float b,float c)
{
    float temp = (b*b) - (4*a*c);
    
    if (temp >= 0)
    {
        return true;
    }
    return false;
}

void root1(float a,float b,float c,float* x,float* r,float* i)
{
    if (isReal(a,b,c))
    {
        float temp = (b*b) - (4*a*c);
         if (temp == 0)
        {
            *x = (-b)/(2*a);
        }
        else
        {
         *x = (-b - sqrt(temp))/2*a;
         
        }
    }
    else
    {
        *r = -b/(2*a);
        float temp1 = -((b*b) - (4*a*c));
        float temp2 = sqrt(temp1);
        *i = temp2/(2*a);
    }
}

void root2(float a,float b,float c,float* x,float* r,float* i)
{
    if (isReal(a,b,c))
    {
        float temp = (b*b) - (4*a*c);
        
        if (temp == 0)
        {
            *x = (-b)/(2*a);
        }
        else
        {
         *x = (-b - sqrt(temp))/2*a;
         
        }
    }
    else
    {
        *r = -b/(2*a);
         float temp1 = -((b * b) - (4 * a * c)); 
        float temp2 = sqrt(temp1);
        *i = temp2 / (2 * a);  
    }
}

int main()
{
   float a,b,c,x1 = 0,x2 = 0,real1,img1,real2,img2;
   printf("The quadratic equation here is addressed as ax^2 + bx + c = 0\n");
   printf("Enter the value of a\n");
   scanf("%f",&a);
   
   printf("Enter the value of b\n");
   scanf("%f",&b);
   
   printf("Enter the value of c\n");
   scanf("%f",&c);
   
   if (a == 0)
   {
       float temp = -(c/b);
       printf("There will only be a single root:\nx = %.3f\n",temp);
   }
   
  else  if(isReal(a,b,c))
   {
       root1(a,b,c,&x1,&real1,&img1);
       root2(a,b,c,&x2,&real2,&img2);
       printf("The roots of the quadratic equation is:\nx1 = %.3f\nx2 = %.3f",x1,x2);
   }
   else
   {
       root1(a,b,c,&x1,&real1,&img1);
       printf("The roots of the equation is:\nx1 = %.3f + %.3fi\n",real1,img1);
       
       root2(a,b,c,&x2,&real2,&img2);
       printf("x2 = %.3f - %.3fi\n",real2,img2);
   }
    return 0;
}
