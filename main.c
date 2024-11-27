#include <stdio.h>
#include <string.h>

int main()
{
    char name[100];
    printf("Enter your name\n");
    fgets(name,sizeof(name),stdin);
    printf("Your name is %s\n",name);
    return 0;
}