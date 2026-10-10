#include <stdio.h>

int get_integer(void);
int factorial(int n);
int combination(int n, int r);

int main(void)
{
    int n, r;

    printf("n 값을 입력하세요: ");
    n = get_integer();

    printf("r 값을 입력하세요: ");
    r = get_integer();

    printf("C(%d, %d) = %d\n", n, r, combination(n, r));

    return 0;
}

int get_integer(void)
{
    int value;
    scanf("%d", &value);
    return value;
}

int factorial(int n)
{
    int i;
    int res = 1;

    for (i = 1; i <= n; i++)
        res *= i;

    return res;
}

int combination(int n, int r)
{
    return factorial(n) / (factorial(n - r) * factorial(r));
}