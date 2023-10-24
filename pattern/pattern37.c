//Write a pro to print stare pyramid.

        //     1 
        //   1 2 3 
        // 1 2 3 4 5
            
    
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter height of pyramid: ");
    scanf("%d",&a);
    
    // printf("Enter numbers of column: ");
    // scanf("%d",&b);
    
    if(a>0)
    {
        for(int i=1;i<=a;i++)//////////number of raw
        {
            for(int j=1;j<=a+1-i;j++)
            {
                printf("  ");
            }
            for(int j=1;j<=(2*i)-1;j++)////////number of column/////////////new
            {
                printf("%d ",j);
            }
            printf("\n");/////sub loop puri thay atle navi line ma enter thahse.
        }
    }
    else if(a==0)
    {
        printf("Height is zero.");
    }
    else if(a<0)
    {
        printf("Height can not be -ve.");
    }
    
    return 0;
}