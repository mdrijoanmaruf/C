#include <stdio.h>
// write a program to check if number is positive , nagetive or zero.

int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d" , &n);

    if (n == 0)
    {
        printf("The number is zero.\n");    
    }
    else if (n > 0)
    {
        printf("The number is positive.\n");
    }
    else{
        printf("The number is nagative.\n");
    }
    
    
return 0;
}