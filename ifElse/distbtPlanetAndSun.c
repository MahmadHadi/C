// Write a programe to findout distance of planet from sun
// https://www.jpl.nasa.gov/edu/pdfs/scaless_reference.pdf
#include<stdio.h>
void main()
{ 
    int a;
    printf("Enter 1 for Mercury");
    printf("\nEnter 2 for Venus");
    printf("\nEnter 3 for Earth");
    printf("\nEnter 4 for Mars");
    printf("\nEnter 5 for Jupiter");
    printf("\nEnter 6 for Saturn");
    printf("\nEnter 7 for Uranus");
    printf("\nEnter 8 for Neptune: ");
    scanf("%d",&a);
    
    if(a==1)
    {
        printf("Distance between Sun and Mercury is 57,900,000Km.");
    }
    else if(a==2)
    {
        printf("Distance between Sub and Venus is 108,200,000Km.");
    }
    else if(a==3)
    {
        printf("Distance between Sun and Earth is 149,600,000Km.");
    }
    else if(a==4)
    {
        printf("Distance between Sun and Mars is 227,900,000Km.");
    }
    else if(a==5)
    {
        printf("Distance between Sun and Jupiter is 778,600,000Km.");
    }
    else if(a==6)
    {
        printf("Distance between Sun and Saturn is 1,433,500,000Km.");
    }
    else if(a==7)
    {
        printf("Disstance between Sun and Uranus is 2,872,500,000Km.");
    }
    else if(a==8)
    {
        printf("Distance between Sun and Neptune is 4,495,100,000Km.");
    }
    else
    {
        printf("Please enter valid input.");
    }
}