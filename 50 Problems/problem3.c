#include <stdio.h>
// write a program to swap two number without using temporary variable.

int main(){
    int a , b;
    printf("Enter a: ");
    scanf("%d" , &a);
    printf("Enter b: ");
    scanf("%d" , &b);
    printf("Before swap a = %d and b = %d\n" , a , b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swap a = %d and b = %d\n" , a , b);

return 0;
}