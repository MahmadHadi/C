// Write a programe to create a calc 
// ->Addition (+)
// ->Subtraction  (-)
// ->Mulitplication (*)
// ->Division ( / )
// ->Modulus (%)
// ->max
// ->min
// ->equality 

#include<stdio.h>
void main()
{
    float a,b,c;
    printf("Enter value of 1st number: ");
    scanf("%f",&a);
    printf("Enter value of 1nd number: ");
    scanf("%f",&b);
    
    printf("Enter 1 for Addition");
    printf("\nEnter 2 for Subtraction");
    printf("\nEnter 3 for Mulitplication");
    printf("\nEnter 4 for Division");
    printf("\nEnter 5 for Modulus");
    printf("\nEnter 6 for Max");
    printf("\nEnter 7 for Min");
    printf("\nEnter 8 for Eequality: ");
    scanf("%f",&c);
    
    if(c==1)
    {
        c=a+b;
        printf("answer= %f",c);
    }
    else if(c==2)
    {
        c=a-b;
        printf("answer= %f",c);
    }
    else if(c==3)
    {
        c=a*b;
        printf("answer= %f",c);
    }
    else if(c==4)
    {
        if(b!=0)
        {
            c=a/b;
            printf("answer= %f",c);
        }
        else
        {
            printf("Here number two is zere that'S why can'T be devided.");
        }
    }
    // else if(c==5)
    // {
    //     c=a%b;
    //     printf("answer= %f",c);
    // }
    else if(c==6)
    {
        if(a>b)
        {
            printf("a is max");
        }
        else 
        {
            printf("b is maxa");
        }
    }
    else if(c==7)
    {
        if(a<b)
        {
            printf("a is min");
        }
        else 
        {
            printf("b is min");
        }
    }
    else if(c==8)
    {
        if(a==b)
        {
            printf("Number one and two are equal.");
        }
        else
        {
            printf("Number one and two are not equal.");
        }
    }
    
}