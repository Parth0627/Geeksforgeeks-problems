#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Num1
{
    int data;
    struct Num1* next;
}*first = NULL;

struct val
{
    int data;
    struct Num1* next;
}*top = NULL;

void addtonum1(struct Num1 ** p,int value)
{
    struct Num1* t;
    t = (struct Num1*)malloc(sizeof(struct Num1));
    
    if ( t == NULL)
    {
        printf("Memory overflow!\n");
    }
    else
    {
        t->data = value;
        t->next = NULL;
        
        if (*p == NULL)
        {
            *p = t;
        }
        else
        {
        
        struct Num1* curr = *p;
        while (curr->next != NULL)
        {
            curr = curr->next;
        }
        curr->next = t;
        }
    }
}

void addtonum2(struct val** p,int value)
{
    struct val* t;
    t = (struct val*)malloc(sizeof(struct val));
    
    if (t == NULL)
    {
        printf("Memory Overflow!\n");   
    }
    else
    {
        t->data = value;
        t->next = NULL;
        
        if (*p == NULL)
        {
            *p = t;
        }
        else
        {
            struct val* curr = *p;
            while (curr->next != NULL)
            {
                curr = curr->next;
            }
            curr->next = t;
        }
    }
}

bool isThere(struct val* p,int value)
{
    while (p != NULL)
    {
        if(p->data == value)
        {
            return true;
        }
        else
        {
            p = p->next;
        }
    }
    return false;
}

bool isPresent(struct Num1* p,int * LCM)
{
    while (p != NULL)
    {
        if (isThere(top,p->data))
        {
            *LCM = p->data;
            return true;
        }
        else
        {
            p = p->next;
        }
    }
    return false;
}

int lcm(int x,int y)
{
    int mul1 = 0,mul2 = 1,c = 0;
    int i = 1,LCM = 0;
    
    while (c != 1)
    {
      mul1 = x*i;
      addtonum1(&first,mul1);
      mul2 = y*i;
      addtonum2(&top,mul2);
      i++;
      
      if (isPresent(first,&LCM))
      {
          c = 1;
      }
      else
      {
          c = 0;
      }
    }
    
    return LCM;
}

int main()
{
   int num1,num2,temp1,temp2;
   
   printf("Enter your first Number\n");
   scanf("%d",&num1);
   
   printf("Enter your second Number\n");
   scanf("%d",&num2);
   
   if (num1 == 0 && num2 == 0)
   {
       printf("LCM of 0 and 0 is undefined\n");
   }
   else if (num1 == 0 || num2 == 0)
   {
       printf("0 is the least common multiple of %d and %d\n",num1,num2);
   }
   else
 {
     if (num1 < 0)
     {
         temp1 = 0 - num1;
     }
     if (num2 < 0)
     {
         temp2 = 0 - num2;
     }
   printf("%d is the least common multiple of %d and %d\n",lcm(temp1,temp2),num1,num2);
   }
   
    return 0;
}
