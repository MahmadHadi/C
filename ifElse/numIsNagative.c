// Write a programe to findout wether the user given number is negative or not if negative give message "number is negative "
#include <stdio.h>
void main()
{
    float a;
    printf("Enter any number: ");
    scanf("%f",&a);
    

    if(a<0)
    {
        printf("Given number is negative.");
    }
    // else if(a==0)
    // {
    //     printf("Given number is nither negative nor positive.");
    // }
    // else
    // {
    //     printf("Given number is positive.");
    // }
}