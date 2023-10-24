//Create a structure type person with name,salary, and age as its attributes. Decalre and initialize 2 variables for this 
//Print the name of 1st person and age of 2nd person

#include<stdio.h>
int main()
{
    struct person
    {
        char name[30];
        int age;
        int salary;
    };
    
    struct person p1={"Nayani mahmadHadi",18,0};
    printf("Name of person is %s.\n",p1.name);
    
    struct person p2={"Makavana hamza",18,-99};
    printf("%s is %d years old.",p2.name,p2.age);
    
    
    
    return 0;
}