//Display this GP 1,2,4,8,16,32,...,n terms.

#include <stdio.h>

int main()
{
    int a,b,c=1;
    
    printf("How many terms do you want?\n");
    scanf("%d",&a);
    
    for(b=1;b<=a;b++)
    {
        printf("%d ",c);
        c=c*2;
    }
    
    return 0;
}
