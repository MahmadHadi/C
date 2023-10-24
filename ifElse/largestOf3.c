// Write a programe to findout largest variable out of given 3 variable 
#include<stdio.h>
void main()
{
    float a,b,c;
    printf("Enter value of first variable: ");
    scanf("%f",&a);
    printf("Enter value of second variable: ");
    scanf("%f",&b);
    printf("Enter value of third variable: ");
    scanf("%f",&c);
    
    if(a>b&&a>c)
    {
        printf("First variable is largest.");
    }
    else if(b>a&&b>c)
    {
        printf("Second variable is largest.");
    }
    else if(c>a&&c>b)
    {
        printf("Third variable is largest.");
    }
    else if(a==b && a==c)
    {
        printf("Value of first,second and third variable is same.");
    }  
}