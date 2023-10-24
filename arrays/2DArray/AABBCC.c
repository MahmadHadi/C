//Write a pro to print a 5*5 matrix with forst row of A second of B and so on

//              A A A A A
//              B B B B B
//              C C C C C
//              D D D D D
//              E E E E E

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
        }
        temp++;
        
        printf("\n");
    }
    
    return 0;
}