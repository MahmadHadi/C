//Write a pro to print A to Y in a 5*5 matrix

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
    
    int temp=64;
    
    for(int i=0;i<5;i++)
    {
        
        for(int j=0;j<5;j++)
        {
            
            printf("%c ",ar[i][j]+temp);
            temp++;
        }
        
        printf("\n");
    }
    
    return 0;
}