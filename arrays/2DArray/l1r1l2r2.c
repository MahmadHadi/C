//given a matrix 'ar' of dimensions nxm and 2 coordinates (l1,r1) and (l2,r2). return the sum of the rectangle from (l1,r1) and (l2,r2).
#include<stdio.h>
int main()
{
    int ar[3][3]={1,2,3,4,5,6,7,8,9};
    
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",ar[i][j]);
        }
        printf("\n");
    }
    
    int l1,l2,r1,r2;
    
    printf("Enter l1:");
    scanf("%d",&l1);
    
    printf("Enter r1:");
    scanf("%d",&r1);
    
    printf("Enter l2:");
    scanf("%d",&l2);
    
    printf("Enter r2:");
    scanf("%d",&r2);
    
    int sum;
    
    for(int i=l1;i<=l2;i++)
    {
        for(int j=r1;j<=r2;j++)
        {
            sum=sum+ar[i][j];
        }
    }
    printf("Sum is %d.",sum);
    
    return 0;
}