//print n!

// note:
//     5!=5*4*3*2*1        =>5!=5*4!  }
//     4!=4*3*2*1          =>4!=4*3!  }
//     3!=3*2*1            =>3!=3*2!  }   this is known as recrsive tree / ladder
//     2!=2*1              =>2!=2*1!  }
//     1!=1                =>1!=1     }


#include<stdio.h>
int fact(int m)
{
    if(m==1) return 1;
    int f=m*fact(m-1);
    return f;

}
int main()
{
    
    int m;
    printf("Enter value of N: ");
    scanf("%d",&m);
    fact(m);
    
    printf("%d! = %d",m,fact(m));
    return 0;
}