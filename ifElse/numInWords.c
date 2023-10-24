// Write a programe to print number in words only for 2 digit number 
// => 78
// seven eight

#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter any two digit number: ");
    scanf("%d",&a);
    
    b=a%10;
    c=a/10;
    
    // printf("b=%d\n",b);
    // printf("c=%d",c);
    
    if(c==1)
    {
        printf("one ");
    }
    else if(c==2)
    {
        printf("two ");
    }
    else if(c==3)
    {
        printf("three ");
    }
    else if(c==4)
    {
        printf("four ");
    }
    else if(c==5)
    {
        printf("five ");
    }
    else if(c==6)
    {
        printf("six ");
    }
    else if(c==7)
    {
        printf("seven ");
    }
    else if(c==8)
    {
        printf("eight ");
    }
    else if(c==9)
    {
        printf("nine ");
    }
    else if(c==0)
    {
        printf("zoro ");
    }
    
    if(b==1)
    {
        printf("one");
    }
    else if(b==2)
    {
        printf("two");
    }
    else if(b==3)
    {
        printf("three");
    }
    else if(b==4)
    {
        printf("four");
    }
    else if(b==5)
    {
        printf("five");
    }
    else if(b==6)
    {
        printf("six");
    }
    else if(b==7)
    {
        printf("seven");
    }
    else if(b==8)
    {
        printf("eight");
    }
    else if(b==9)
    {
        printf("nine");
    }
    else if(b==0)
    {
        printf("zoro");
    }
}