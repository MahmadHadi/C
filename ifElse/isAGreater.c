// Write a programe to findout if a is greater or not 
#include<stdio.h>
void main()
{
    float a,b,c;
    printf("Enter value of number one: ");
    scanf("%f",&a);

    printf("Enter value of number two: ");
    scanf("%f",&b);

    printf("Enter value of number three: ");
    scanf("%f",&c);

    if(a>b){
        if(a>c){
            printf("Number one is larger ");
        }
        else{
            printf("Number three is larger ");
        }
    }
    else{
        if(b>c){
            printf("Number two is larger ");
        }
        else{
            printf("Number three is larger ");
        }
    }
}