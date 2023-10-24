//Print hadi using string

#include<stdio.h>
int main()
{
    // char nm[]={'h','a','d','i'};//Long method
    
    char nm[]="hadi";//short method
    
    int size=sizeof(nm)/sizeof(nm[4]);
    
    // for(int i=0;i<size;i++)
    // {
    //     printf("%c",nm[i]);
    // }

    printf("%s",nm);
    
    return 0;
}