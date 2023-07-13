#include <stdio.h>
// wirte a program to find sum of two numbers

int main(){
    int a , b;
    printf("Enter a: ");
    scanf("%d" , &a);
    printf("Enter b: ");
    scanf("%d" , &b);
    int c = a + b;
    printf("Sum of %d + %d = %d\n" , a , b , c);
return 0;
}