//Write a pro to print factorial of numbers.

#include<stdio.h>
int main()
{
    int a,b=1,c=1;
    
    printf("Enter a number: ");
    scanf("%d",&a);
    
    if(a>0)
    {
        while(c<=a)
        {
            b*=c;
            c++;
        }
        printf("Ansewr is %d\n",b);

    
    }
    else
    {
        printf("Enter any number greater then 0.");
    }
    
    return 0;
}