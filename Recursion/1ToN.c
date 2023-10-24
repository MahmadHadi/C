//Write a pro to print 1 to n.




//.........................Method-2..................................//


#include<stdio.h>
void hadi(int n)////////////////////function calling itself
{
    if(n==0) return;
    hadi(n-1);////////////////////function calling itself
    printf("%d\n",n);///////////////////////////////////////////n to 1 vala code ne copy kari khali line interchange kari che.
}
int main()
{
    int n;
    printf("Enter value of n: ");
    scanf("%d",&n);
    hadi(n);

    return 0;
}

//.........................Method-1..................................//

// #include<stdio.h>
// void hadi(int m,int n)////////////////////function calling itself
// {
//     if(m>n) return;
//     printf("%d\n",m);
//     hadi(m+1,n);////////////////////function calling itself
// }
// int main()
// {
//     int n;
//     printf("Enter value of n: ");
//     scanf("%d",&n);
//     hadi(1,n);

//     return 0;
// }




