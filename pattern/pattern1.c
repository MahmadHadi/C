//Write a pro to print SOLID RECTANGLE take number of raw and column from user.

    // *******
    // *******
    // *******
    
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter value of raws: ");
    scanf("%d",&a);
    
    printf("Enter numbers of column: ");
    scanf("%d",&b);
    
    for(int i=1;i<=a;i++)//////////number of raw
    {
        for(int j=1;j<=b;j++)////////number of column
        {
            printf("* ");
        }
        printf("\n");/////sub loop puri thay atle navi line ma enter thahse.
    }
    
    return 0;
}