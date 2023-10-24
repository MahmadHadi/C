#include<stdio.h>

void swap(int*x,int*y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    
}

int main()
{
    int x,y;
    scanf("%d",&x);
    scanf("%d",&y);
    
    printf("before %d %d",x,y);
    printf("\n");
    swap(&x,&y);
    
    printf("after %d %d",x,y);
    
    return 0;
}