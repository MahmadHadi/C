//Write a pro to print student'S roll number and marks in a matrinx

#include<stdio.h>
int main()
{
    
    int ar[4][2]={{1,30},{2,40},{3,50},{4,60}};//decleration and initializasion
    
    for(int i=0;i<4;i++)//to print row
    {
        for(int j=0;j<2;j++)//to print column
        {
            printf("%d ",ar[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}