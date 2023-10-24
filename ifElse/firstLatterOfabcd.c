// write a program to accept one letter from user. if letter is (a) then print message "it is first letter of abcd".
#include <stdio.h>
void main()
{
    char a;
    printf("Enter any letter: ");
    scanf("%c",&a);

    if(a=='a')
    {
        printf("it is first letter of abcd.");
    }


}