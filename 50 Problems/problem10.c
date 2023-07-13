#include <stdio.h>
// write a program to if number is prime.

int main()
{
    int a, x;
    printf("Enter a: ");
    scanf("%d", &a);
    for (int i = 2; i < a; i++)

    {
        if (a == 1 || a == 2)
        {
            printf("%d is prime number.\n", a);
            break;
        }

        if (a % i == 0)
        {
            x = 1;
            break;
        }
        else
        {
            x = 0;
        }
    }
    if (x == 0)
    {
        printf("%d is prime number.\n", a);
    }
    else
    {
        printf("%d is not prime number.\n", a);
    }

    return 0;
}