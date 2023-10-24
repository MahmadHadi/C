//Write a pro to print half solid inverted  triangle.

    // a a a 
    // b b 
    // c
    
#include<stdio.h>
int main()
{
    int a;
    printf("Enter value of raws: ");
    scanf("%d",&a);
    
    
    
    for(int i=1;i<=a;i++)//////////number of raw
    {
        for(int j=1;j<=a+1-i;j++)////////number of column
        {
            printf("%c ",i+64);
        }
        printf("\n");/////sub loop puri thay atle navi line ma enter thahse.
    }
    
    return 0;
}