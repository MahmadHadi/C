//NUMBER MA JETLA DIGIT HASHE TETLI VAAR LOOP RUN THASHE.

//Write a pro to print reverse of given number.

#include<stdio.h>
int main()
{
    
    int a,b,c=0;
    
    printf("Enter any number: ");
    scanf("%d",&a);
    
    while(a!=0)
    {
        
        b=a%10;////b is last digit
        a=a/10;///////a mathi chelli vakue ghatadva
        c=c*10+b;//////c reverse number chh{LAST DIGIT NE VARAM VAAR ADD KARVA LOOP CHALSHE.}
    }
    printf("%d",c);
    return 0;
}