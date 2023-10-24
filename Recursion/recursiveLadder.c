//print sum of n to 1 

// note:
//     sum(5)=5+4+3+2+1        =>sum(5)=5+sum(4)}
//     sum(4)=+4+3+2+1         =>sum(4)=4+sum(3)}
//     sum(3)=3+2+1            =>sum(3)=3+sum(2)}       this is known as recrsive tree / ladder
//     sum(2)=2+1              =>sum(2)=2+sum(1)}
//     sum(1)=1                =>sum(1)=1       }


#include<stdio.h>
int sum(int m)
{
    if(m==1) return 1;
    int s=m+sum(m-1);
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