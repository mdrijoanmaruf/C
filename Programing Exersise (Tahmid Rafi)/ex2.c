 #include <stdio.h>
// namta print

int main()
{
    int a = 1, b = 2, c = 3, d = 4, i, j = 6, k = 7, l = 8, m = 9, n = 10, value;
    printf("Entar your namta number:\n");
    scanf("%d", &i);

    char sing = '*';

    value = i * a;
    printf("%d %c %d = %d\n", a, sing, i, value);
    value = i * b;
    printf("%d %c %d = %d\n", b, sing, i, value);
    value = i * c;
    printf("%d %c %d = %d\n", c, sing, i, value);
    value = i * d;
    printf("%d %c %d = %d\n", d, sing, i, value);
    value = i * i;
    printf("%d %c %d = %d\n", i, sing, i, value);
    value = i * j;
    printf("%d %c %d = %d\n", j, sing, i, value);
    value = i * k;
    printf("%d %c %d = %d\n", k, sing, i, value);
    value = i * l;
    printf("%d %c %d = %d\n", l, sing, i, value);
    value = i * m;
    printf("%d %c %d = %d\n", m, sing, i, value);
    value = i * n;
    printf("%d %c %d = %d\n", n, sing, i, value);
    return 0;
}