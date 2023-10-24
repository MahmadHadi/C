// print the reverse number triangle.

            //       a
          //       a b
        //       a b c

#include<stdio.h>
int main()
{
    int a,b,c;
    
    printf("Enter height of triangle: ");
    scanf("%d",&a);
    
    if(a>0)
    {
        for(int i=1;i<=a;i++)///////raw
        {
            for(int j=1;j<=a-i;j++)/////////spaces
            {
                printf("  ");
            }
            
            for(int k=1;k<=i;k++)/////////////stare
            {
                printf("%c ",k+64);
                
            }
            printf("\n");
        }
    }
    else if(a==0)
    {
        printf("Height is zero.");
    }
    else if(a<0)
    {
        printf("Height can not be -ve.");
    }
    return 0;
}