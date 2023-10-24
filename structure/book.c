//Create a structure type book with name,price, and number of pages as its attribute.

#include<stdio.h>
int main()
{
    struct book
    {
        char name[30];
        int price;
        int nPages;
    };
    
    struct book bk={"Ikagai",1000,500};
    
    printf("Name of book is %s.\n",bk.name);
    printf("Price of book is %d.\n",bk.price);
    printf("Number of pages in book are %d.\n",bk.nPages);
    
    
    return 0;
}