#include <stdio.h>

int total_digit(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return (n % 10) + total_digit(n / 10);
}

int main()
{
    int n;
    scanf("%d", &n);

    int total = total_digit(n);
    printf("Jumlah digit dari %d adalah %d\n", n, total);

    return 0;
}
