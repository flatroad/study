
#include <stdio.h>

int main()
{

    int N;
    int count;
    int i = 0;
    int j;

    scanf("%d", &N);

    if (N % 5 == 0)
    {
        printf("%d", N / 5);
    }
    else if (N % 5 != 0)
    {
        count = N / 5;

        for (i = count; i >= 0; i--)
        {
            if ((N - (5 * i)) % 3 == 0)
            {
                j = ((N - (5 * i)) / 3);
                printf("%d", i + j);
                break;
            }
        }
    }
    if (i == -1)
    {
        printf("-1");
    }
    return 0;
}