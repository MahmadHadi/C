//change Value Using Pointers

#include<stdio.h>
int main()
{
    int x=90;
    int* nm=&x;
    printf("before change: %d\n",*nm);/////////////*pointer nu name
    *nm=8;
    printf("after change: %d",*nm);/////////////*pointer nu name

    return 0;
}