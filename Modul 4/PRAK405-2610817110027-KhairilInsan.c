#include <stdio.h>

int main()
{
    int n, multiples;
    scanf("%d %d", &n, &multiples);

    int total = 0;
    for (int i = 1; i <= n; i++)
    {
        int equal = 0;
        for (int j = i; j > 0; j--)
        {
            printf("(%d * %d)", j, multiples);
            if (j > 1)
            {
                printf(" + ");
            }
            equal = equal + j * multiples;
        }
        printf(" = %d\n", equal);
        total = total + equal;
    }
    printf("Total: %d\n", total);

    return 0;
}
