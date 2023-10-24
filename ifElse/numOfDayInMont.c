//write a program to accept month number from user. display message "this month has 28 or 29 days" if month if february
#include <stdio.h>
void main()
{
    float a;
    printf("Enter number of month: ");
    scanf("%f",&a);

    if(a==2)
    {
        printf("This month has 28 or 29 days.");
    }


}