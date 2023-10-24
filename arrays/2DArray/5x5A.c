//Write a pro to print a 5*5 matrix with each elements of "A"

#include<stdio.h>
int main()
{
    int ar[5][5];
    
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            ar[i][j]=1;
        }
    }
    
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            printf("%c ",ar[i][j]+64);
        }
        printf("\n");
    }
    
    return 0;
}