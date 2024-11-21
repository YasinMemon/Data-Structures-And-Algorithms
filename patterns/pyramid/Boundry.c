#include <stdio.h>

int main()
{
    int i, j, n = 4;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            printf(" ");
        }
        if (i > 0)
        {
            printf("*");

            for (j = 0; j < 2 * i - 1; j++)
            {
                printf(" ");
            }
        };
        printf("*");
        printf("\n");
    }
}