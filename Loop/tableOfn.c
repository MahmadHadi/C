//Write a pro to print table of 19.
#include <stdio.h>

int main()
{   
    
    int a,num;
    printf("Enter a integer number:");
    scanf("%d",&num);
    
    for(a=num;a<=num*10;a=a+num)
    {
        printf("%d\n",a);
    }
    
    return 0;
}
