#include <stdio.h>
// write a program to calculate the factorial of a number.

int main(){
    int n;
    int factorial = 1;
    printf("Enter Number: ");
    scanf("%d" , &n);

    for (int i = 1; i <= n; i++)
    {
        factorial = factorial * i;
    }
    printf("%d factorial is : %d\n" , n , factorial);
    
return 0;
}