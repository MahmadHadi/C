//Display this AP 1,3,5,7,9,...,n terms.

#include <stdio.h>

int main()
{
    int b;
    printf("How many terms do you want?\n");
    scanf("%d",&b);
    
    for(int a=1;a<=2*b-1;a=a+2)
    {
        printf("%d ",a);
    }
    
    
    return 0;
}