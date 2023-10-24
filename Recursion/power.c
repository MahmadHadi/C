//print b raised to p

// note:
        // b^p = b*b for p times



//;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;METHOD 1 WITH RECURSION;;;;;;;;;;;;;;;;;;;;;//

 #include<stdio.h>
int power(int b,int p)
{
    if(p==0) return 1;
    return b*power(b,p-1);
    
//               or

    // if(p==0) return 1;
    // int pd=b*power(b,p-1);
    // return pd;
}
int main()
{
    int b,p;
    printf("Enter base value: ");
    scanf("%d",&b);
    
    printf("Enter power value: ");
    scanf("%d",&p);
    

    printf("%d raised to the power %d is %d.",b,p,power(b,p));
    return 0;
}



//;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;method 2 WITHOUT RECURSION;;;;;;;;;;;;;;;;;;;;;;//
// #include<stdio.h>
// int power(int b,int p)
// {
//     int pd=1;
//     for(int i=1;i<=p;i++)
//     {
//         pd=pd*b;
//     }
//     return pd;
// }
// int main()
// {
//     int b,p;
//     printf("Enter base value: ");
//     scanf("%d",&b);
    
//     printf("Enter power value: ");
//     scanf("%d",&p);
    

//     printf("%d raised to the power %d is %d.",b,p,power(b,p));
//     return 0;
// }