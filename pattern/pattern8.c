//Write a pro to print half solid number triangle.

    // 1 
    // 1 2 
    // 1 2 3
    
#include<stdio.h>
int main()
{
    int a;
    printf("Enter value of raws: ");
    scanf("%d",&a);
    
    
    
    for(int i=1;i<=a;i++)//////////number of raw
    {
        for(int j=1;j<=i;j++)////////number of column
        {
            printf("%d ",j);
        }
        printf("\n");/////sub loop puri thay atle navi line ma enter thahse.
    }
    
    return 0;
}