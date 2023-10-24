//write a pro to print 1 to 100 and break it in middel 

#include <stdio.h>

int main()
{   
    int a;
    for(a=1;a<=100;a++)
    {
        printf("%d\n",a);

        if(a==92)
        {
            break;
        }

    }

    return 0;
}
