//Write a pro to print followig pettern{Number square}.
    // 1234...
    // 1234...
    // 1234...
    // 1234...
    
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
            printf("%d ",j);
        }
        printf("\n");/////sub loop puri thay atle navi line ma enter thahse.
    }
    
    return 0;
}