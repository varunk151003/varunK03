//looping statements
#include<stdio.h>

int main()
{
    int gfg=0;
    char str[50]="Hello World";
    
    for(gfg=1;gfg<=5;gfg++)
    {
        printf("%s\n",str);
    }
    
   
    return 0;
}

//looping ststements without curly braces
#include<stdio.h>

int main()
{
    int i;
    
    for(i=1;i<=10;i++)
        printf("Hi,Good to see you! ");
    printf("\nThis statement executes after for loop");
   
    return 0;
}
