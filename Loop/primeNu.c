//Write a pro to check if user given number is a prime number or not

#include<stdio.h>
int main()
{
    int a;
    printf("Enter a numbre: ");
    scanf("%d",&a);
    
    int temp=0;
    
    if(a==0||a==1) printf("Number is a prime number.");
    
    else
    {
        for(int i=2;i<=a/2;i++)
        {
            if(a%2==0)
            {
                temp = 1;
                break;
            }
        }
    }
    if(temp == 1) printf("Number is not a prime number.");
    
    else printf("Number is a prime number.");
}