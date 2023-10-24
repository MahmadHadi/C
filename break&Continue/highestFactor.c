//In jounral cases ther are no highest factor then number/2 axcept the number itselfe.
//Write a pro to print highest factor.

#include<stdio.h>
int main()
{
    int hf,n;
    printf("Enter a number: ");
    scanf("%d",&n);
    
    for(int i=n/2;i>0;i--)//In jounral cases ther are no highest factor then number/2 axcept the number itself.
    {                     //Tethi ahi aapde loop ni condition ma i<=n/2 lidu chh.
        if(n%i==0)
        {
            hf=i;
            break;
        }
    }
    printf("Highest factor is %d",hf);
    
    return 0;
}