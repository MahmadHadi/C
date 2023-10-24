//print sum of n to 1 

//...........................METHOD-1.WITH RETURN TYPE.....................................\\

// note:
//     sum(5)=5+4+3+2+1        =>sum(5)=5+sum(4)
//     sum(4)=+4+3+2+1         =>sum(4)=4+sum(3)
//     sum(3)=3+2+1            =>sum(3)=3+sum(2)
//     sum(2)=2+1              =>sum(2)=2+sum(1)
//     sum(1)=1                =>sum(1)=1

#include<stdio.h>
int sum(int m)
{
    int s=0;
    for(int i=1;i<=m;i++)       
    {
        s=s+i;
    }
    return s;
    
}
int main()
{
    
    int m;
    printf("Enter value of N: ");
    scanf("%d",&m);
    sum(m);
    
    printf("Sum is %d",sum(m));
    return 0;
}

//...........................METHOD-2..WHITHOUT RETURN TYPE....................................\\
// #include<stdio.h>
// void n(int m,int sum)
// {
//     if(m==0) 
//     {
//         printf("%d",sum);
//         return;
//     }
//     n(m-1,sum+m);
// }
// int main()
// {
    
//     int m;
//     printf("Enter value of N: ");
//     scanf("%d",&m);
//     n(m,0);
    
//     return 0;
// }