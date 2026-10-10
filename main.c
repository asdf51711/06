#include <stdio.h>

int sumTwo(int a, int b)
{
    return a + b;
}

int square(int n)
{
    return n * n;
}

int get_max(int x, int y)
{
    if (x > y)
        return x;
    else
        return y;
}

int main(void)
{
    int result;

    result = sumTwo(4, 6);
    printf("sumTwo(4, 6) = %d\n", result);

    result = square(5);
    printf("square(5) = %d\n", result);

    result = get_max(3, 8);
    printf("get_max(3, 8) = %d\n", result);

    return 0;
}