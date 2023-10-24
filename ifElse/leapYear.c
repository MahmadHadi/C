//Write a pro to check if given year is leap or not by ternary
#include<stdio.h>
int main()
{
    int a;
    printf("Enter any year: ");
    scanf("%d",&a);
    (a%4==0) ? printf("Given year is a leap year.") : printf("Given year is not a leap year.");
    return 0;
    
}