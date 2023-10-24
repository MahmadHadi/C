// fibonacci

// note:
        // fibonacci sereis : 1,1,2,3,5,8,13,21,34,55,89,144,...
        //             term : 1,2,3,4,5,6, 7, 8, 9,10,11, 12,...
#include<stdio.h>
int fibo(int m)
{
    if(m==1 || m==2) return 1;
    return fibo(m-1)+fibo(m-2);
}
int main()
{
    
    int m;
    printf("Enter value of N: ");
    scanf("%d",&m);

    printf("%dth term of FIBONACCI is %d",m,fibo(m));
    return 0;
}