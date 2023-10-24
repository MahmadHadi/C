//Write a pro to make a calculator by using SWITCH CASES.
#include<stdio.h>
int main()
{
    char a;
    float b,c;
    
    printf("Enter the operator: ");
    scanf("%c",&a);
    
    printf("Enter 1st number: ");
    scanf("%f",&b);
    
    printf("Enter 2nd number: ");
    scanf("%f",&c);
    
    
    
    
    switch(a)
    {
        
        case '+':
            b=b+c;
            printf("ans = %.2f",b);
            break;
        case '-':
            b=b-c;
            printf("ans = %.2f",b);
            break;
        case '*':
            b=b*c;
            printf("ans = %.2f",b);
            break;
        case '/':
            b=b/c;
            printf("ans = %.2f",b);
            break;
    }
     return 0;
    
}