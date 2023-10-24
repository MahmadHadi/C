// Write a programe to findout whether the user given alphabet is vowel or not 
#include<stdio.h>
void main()
{
    char a;
    printf("Enter any alphabet: ");
    scanf("%c",&a);
    
    if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
    {
        printf("Given input is a vowel");
    }
    else
    {
        printf("Given input is not a vowel");
    }
    
}