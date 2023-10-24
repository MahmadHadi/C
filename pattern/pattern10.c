//Write a pro to print half solid number triangle.

    //   a
    //   b b 
    //   c c c
    
#include<stdio.h>
int main()
{
    int a;
    printf("Enter value of raws: ");
    scanf("%d",&a);
    
    if(a<=26 && a>0)
    {
        for(int i=1;i<=a;i++)//////////number of raw
        {
            for(int j=1;j<=i;j++)////////number of column
            {
                printf("%c ",i+64);
            }   
            printf("\n");/////sub loop puri thay atle navi line ma enter thahse.
        }
    }
    
    else if(a>26)
    {
        printf("Enter value lesser then 26.");
    }
    
    else if(a<=0)
    {
        printf("Enter value greater then 0.");
        
    }
    
    return 0;
}