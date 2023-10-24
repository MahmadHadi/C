//Write a pro to print number is prime or not by BOOLEAN DATA TYPE.

#include<stdio.h>
#include<stdbool.h>////////////////////////////
int main()
{
    int a;
    
    bool flag=true;///////////////////////////
    
    printf("Enter a number: ");
    scanf("%d",&a);
    if(a==1)
    {
        printf("1 is nither prime nor composite.");
    }
    
    else
    {
        for(int i=2;i<=a/2;i++)
        {
            if(a%i==0)
           {
                flag=false;//////////////////////////
            }
        }
    
        if(flag==false)///////////////////////////////
        {
            printf("Given number is composite.");
        }
        else
        {
            printf("Given number is prime number");
        }
    }
    
    
    return 0;
}