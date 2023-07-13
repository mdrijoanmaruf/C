#include <stdio.h>
// write a program to find fibonacci series up to a given number.

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    int first = 0;
    int second = 1;
    int next = first + second;
    printf("1\n");
    while (1)
    {
        next = first + second;
        if (next >= n)
        {
            break;
        }
        printf("%d\n", next);
        first = second;
        second = next;
    }

    return 0;
}