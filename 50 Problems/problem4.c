#include <stdio.h>
// wirte a program to check a number is even or odd

int main(){
    int a;
    printf("Enter Number: ");
    scanf("%d" , &a);
    if (a % 2 == 0)
    {
        printf("The number is even.\n");
    }
    else if (a % 2 != 0 )
    {
        printf("The number is odd.\n");
    }
    else{
        printf("Invalid input.\n");
    }
    
    
return 0;
}