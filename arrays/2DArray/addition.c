//Write a pro to add two matrices

#include<stdio.h>
int main()
{
    int ar[2][2]={1,2,3,4};
    int br[2][2]={5,6,7,8};
    
    for(int i=0;i<2;i++)///printing 1st matrix
    {
        for(int j=0;j<2;j++)
        {
            printf("%d ",ar[i][j]);
        }
        printf("\n");
    }
    
    printf("+\n");//road show
    
    for(int i=0;i<2;i++)//printing 2nd matrix
    {
        for(int j=0;j<2;j++)
        {
            printf("%d ",br[i][j]);
        }
        printf("\n");
    }
    
    printf("=\n");
    
    for(int i=0;i<2;i++)////////////////MAIN ADDITION
    {
        for(int j=0;j<2;j++)
        {
            ar[i][j]=ar[i][j] + br[i][j];
        }
    }
    
    for(int i=0;i<2;i++)//printing result
    {
        for(int j=0;j<2;j++)
        {
            printf("%d ",ar[i][j]);
        }
        printf("\n");
    }
    
    
    return 0;
}