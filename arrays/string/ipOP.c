//Taking I/P AND O/P in string
#include<stdio.h>
int main()
{
    char str[50];
    
    // scanf("%s",str);//........& nahi aave && input deti vakhte jo white space mukiye to automatic scanf puru thay jashe
    gets(str);//.......tethi aapde gets no use kariye 
    
    // printf("%s",str);//.......chale pan puts thi pan kari shakiye.
    puts(str);//BANNE CHALE PRINTF AND PUTS.
}