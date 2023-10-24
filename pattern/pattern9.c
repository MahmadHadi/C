//Write a pro to print half solid alphabet triangle.

    //   a
    //   a b 
    //   a b c
    
#include<stdio.h>
int main()
{
    int a;
    printf("Enter value of raws: ");
    scanf("%d",&a);
    
    if(a>0 && a<=26)
    {
        for(int i=1;i<=a;i++)//////////number of raw
        {
            for(int j=1;j<=i;j++)////////number of column
            {
                printf("%c ",j+64);
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