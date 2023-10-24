//Write a pro to print dimond.
            //     *
            //   * * *
            // * * * * *
            //   * * *
            //     *

#include <stdio.h>

int main()
{
    int a;
    printf("Enter height of dimond: ");
    scanf("%d",&a);
    
    int nsp=a-1;
    int nst=1;
    
    for(int i=1;i<=2*a-1;i++)
    {
        for(int j=1;j<=nsp;j++)/////////spaces
        {
            printf("  ");
        }
        
        for(int j=1;j<=nst;j++)/////////stars
        {
            printf("* ");
        }
        
        if(i<a)
        {
            nsp--;
            nst=nst+2;
        }
        else
        {
            nsp++;
            nst=nst-2;
        }
        printf("\n");
    }
    
    return 0;
}
