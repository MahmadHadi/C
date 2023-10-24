//Writer a pro to check uder given number is even or odd by using ternary
#include<stdio.h>
int main()
{
    int a;
    printf("Enter a numbr: ");
    scanf("%d",&a);
    (a%2==0) ? printf("Given number is even.") : printf("Given number is odd.");
    return 0;
    
}