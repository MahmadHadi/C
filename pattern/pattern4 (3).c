//Write a pro to print followig pettern{Number square}.
        // 1 1 1
        // 2 2 2
        // 3 3 3
    
#include<stdio.h>
int main()
{
    int a;
    printf("Enter sides of Number square:  ");
    scanf("%d",&a);
    
    
    
    for(int i=1;i<=a;i++)//////////number of raw
    {
        for(int j=1;j<=a;j++)////////number of column
        {
            printf("%d ",i);
        }
        printf("\n");/////sub loop puri thay atle navi line ma enter thahse.
    }
    
    return 0;
}