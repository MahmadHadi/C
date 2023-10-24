//Write a pro to print transpose of a 3*3 matrix

#include<stdio.h>
int main()
{
    int ar[3][2]={1,2,3,4,5,6};
    
    printf("Matrix:\n");
    
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("%d ",ar[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    printf("Transpose Of Matrix:\n");
    
    for(int j=0;j<2;j++)///////////just change place of i to j      and row to column
    {
        for(int i=0;i<3;i++)///////////just change place of i to j      and row to column
        {
            printf("%d ",ar[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}