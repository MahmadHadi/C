//Print following rectangle{Floyd'S square}.
        
        // 1 2 3 
        // 4 5 6 
        // 7 8 9
        
#include<stdio.h>
int main()
{
    int a,b,c=1;
    
    printf("Enter side length of triangle: ");
    scanf("%d",&a);
    
    printf("Enter height of rectangle: ");
    scanf("%d",&b);
    
    if(a>0 && b>0)
    {
        for(int j=1;j<=b;j++)//////r
        {
            for(int i=1;i<=a;i++)////c
            {
                printf("%d ",c);
                c++;  
            }
            // if(c>a)
            // {
            //     break ;
            // } 
            printf("\n");
        }
   }
   else if(a==0 || b==0)
   {
        if(a==0)
        {
            printf("Length can not be zero.");
        }
        else
        {
            printf("Height can not be zero.");
        }
   }
   else if(a<0 || b<0)
   {
       if(a<0)
       {
           printf("Height can not be negative");
       }
       else
       {
           printf("Height can not be negative");
       }
   }
    return 0;
}