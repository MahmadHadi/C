// 1)write a program to accept height from user as float value display message "you are short" if height is less then 1.8meter
// height = 5.7
#include <stdio.h>
void main()
{
    float a;
    printf("Enter your height in meter: ");
    scanf("%f",&a);

    if(a<1.8)
    {
        printf("You are short.");
    }
    // else if(a<=0)
    // {
    //     printf("Pleas enter valid input.");
    // }
    // else
    // {
    //     printf("You are tall.");
    // }
}