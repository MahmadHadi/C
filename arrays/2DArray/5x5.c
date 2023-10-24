//Write a pro to print a 5*5 matrix with each elements of 10

#include<stdio.h>
int main()
{
    int ar[5][5];
    
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            ar[i][j]=10;
        }
    }
    
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            printf("%d ",ar[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}