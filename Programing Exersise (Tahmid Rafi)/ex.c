#include <stdio.h>
//

int main()
{
    int a;
    printf("Entar your years\n");
    scanf("%d", &a);
    if (a % 4 == 0 && a % 400 == 0)
    {
        printf("this years is lipiyears\n");
    }

    else
    {
        printf("This year is not lipiar\n");
    }

    return 0;
}