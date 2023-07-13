#include <stdio.h>
// sum two numbers

int main(){
    int a , b;
    printf("Enter a: ");
    scanf("%d" , &a);

    printf("Enter b: ");
    scanf("%d" , &b);

    int c = a + b;
    printf("%d + %d = %d\n" , a , b , c);
return 0;
}