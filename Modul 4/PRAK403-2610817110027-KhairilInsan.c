#include <stdio.h>

int main()
{
    int a, b, step, diff;
    scanf("%d %d", &a, &b);

    if (a < b)
    {
        step = 1;
        diff = b - a;
    }
    else
    {
        step = -1;
        diff = a - b;
    }

    for (int i = 0; i <= diff; i++)
    {
        if (i > 0)
        {
            printf("- ");
        }
        printf("%d %d ", a + i * step, b - i * step);
    }
    printf("\n");

    return 0;
}
