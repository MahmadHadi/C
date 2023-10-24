//Display this AP 4,7,10,13,16,...,n terms.

#include <stdio.h>

int main()
{
    int b,c=4;
    printf("How many terms do you want?\n");
    scanf("%d",&b);
    
    printf("AP: ");
    
    ///////////////////////////METHOD 1: With maths formula //////////////////////////////////////////  
    
    // for(int a=4;a<=3*b+1;a=a+3)
    // {
        
    //     printf("%d ",a);
    // }
    
    ///////////////////////////METHOD 2: Without maths formula //////////////////////////////////////////  
        
    for(int a=1;a<=b;a++)
    {
        printf("%d ",c);
        c=c+3;
    }
    
    return 0;
}
