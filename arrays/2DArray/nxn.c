//Write a pro to print a Square matrix of n*n with all element n take n from user
#include<stdio.h>
int main()
{
    int ar[5][5];
    
    int side;
    printf("Enter a number: ");
    scanf("%d",&side);
    
    
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            ar[i][j]=side;
        }
    }
    
    for(int i=0;i<side;i++)
    {
        for(int j=0;j<side;j++)
        {
            printf("%d ",ar[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}