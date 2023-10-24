// Write a programe to findout wether the user is eligible for voting or not 
#include <stdio.h>
void main()
{
    float a;
    printf("Enter your age: ");
    scanf("%f",&a);
    

    if(a>=18)
    {
        printf("You are eligible for votting.");
    }
    // else if(a<=0)
    // {
    //     printf("Pleas enter valid input.");
    // }
     else
    {
        printf("You are NOT elgible for votting or pleas check the input.");
    }
}