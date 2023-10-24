//Find the minimum element in matrix

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
    
    int check=ar[0][0];
    
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(ar[i][j]<=check) check = ar[i][j];
            
            else continue;
        }
    }
    
    printf("Smallest number is %d.",check);
    
    return 0;
}