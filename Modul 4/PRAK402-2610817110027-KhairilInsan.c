#include <stdio.h>

int main()
{
    int n, even;
    scanf("%d", &n);

    for (int i = 1; i <= n; i += 2)
    {
        printf("%d ", i);
    }
    printf("\n");

    if (n % 2 == 0)
    {
        even = n;
    }
    else
    {
        even = n - 1;
    }

    for (int i = even; i > 0; i -= 2)
    {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}
