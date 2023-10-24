//Print following triangle{Inverted Floyd'S triangle}.
        
        // 1 2 3 
        // 4 5
        // 6
        
#include<stdio.h>
int main()
{
    int a,b,c=1;
    
    printf("Enter height of triangle: ");
    scanf("%d",&a);
    
    if(a>0)
    {
        for(int j=a;j>=0;j--)
        {
            for(int i=1;i<=j;i++)
            {
                printf("%d ",c);
                c++;
            }
            printf("\n");
        }
    }
    else if(a==0)
    {
        printf("Height can not be zere.");
    }
    else if(a<0)
    {
        printf("Height can not be zero.");
    }
    
    return 0;
}