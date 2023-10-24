//Write a pro to print highest factor of a number.

    //////////////////////////METHOD 2 SHORT METHOD////////////////////////////////////
    
    #include<stdio.h>
int main()
{
    int hf,n;
    printf("Enter a number: ");
    scanf("%d",&n);
    
    for(int i=n-1;i>0;i--)
    {
        if(n%i==0)
        {
            hf=i;
            break;
        }
    }
    printf("Highest factor is %d",hf);
    
    return 0;
}
// #include<stdio.h>
// int main()
// {
    ////////////////////////METHOD 1 LAMBI METHOD//////////////////////////////
    
    // int n,hf=1;
    
    // printf("Enter a number: ");
    // scanf("%d",&n);
    
    // for(int i=1;i<n;i++)
    // {
    //     if(n%i==0)
    //     {
    //         hf=i;
    //     }
    // }
    // printf("Highest factor of given number is %d",hf);

    // return 0;




}