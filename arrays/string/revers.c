//Write a pro to reverse the given string

#include<stdio.h>
int main()
{
    char str[]="hadi";
    
    puts(str);
    
    int size=sizeof(str)/sizeof(str[0]);
    
    char btr[500];
    
    
    for(int i=0;i<size;i++)
    {
        btr[size]=str[i];
        size--;
    }
    
    puts(btr);
    
    return 0;
}