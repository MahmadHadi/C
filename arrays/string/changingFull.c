//We can change full value of a string by using pointers
// check case 4
#include<stdio.h>
int main()
{
    //::::::::::::::::::::::::::CASE 1:::::::::::::::::::::::::::::::::::::::::::

    // char str[]="hadi nayani.";
    // printf("%s\n",str);
    // str[2]='H';
    // printf("%s\n",str);
    //..................................ERROR NAHI AAVE.................................

    //::::::::::::::::::::::::::CASE 2:::::::::::::::::::::::::::::::::::::::::::

    // char* str="hadi nayani.";//pointer
    // printf("%s\n",str);
    // str[2]='H';////////////////VALUE CHANGE NAHI THAY
    // printf("%s\n",str);
    //..................................ERROR AAVSHE.................................

    //::::::::::::::::::::::::::CASE 3:::::::::::::::::::::::::::::::::::::::::::

    // char str[]="hadi nayani.";
    // printf("%s\n",str);
    // str="HADI NAYANI.";//CAHNGING ALL ELEMENTS OF STRING./////////ERROR
    // printf("%s\n",str);
    //..................................ERROR AAVSHE.................................

    //::::::::::::::::::::::::::CASE 4:::::::::::::::::::::::::::::::::::::::::::

    char* str="hadi nayani.";//pointer
    printf("%s\n",str);
    str="HADI NAYANI.";////////////////PURI VALUE CHANGE THAY POINTER THI
    printf("%s\n",str);
    //..........................ERROR NAHI AAVE VALUE CHANGE THAY JASHE....................
    
    
    return 0;
}