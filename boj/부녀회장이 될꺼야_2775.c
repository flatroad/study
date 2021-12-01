// 0층에는 i명이 살고 있고
// k층에 n호에 몇명이 살고 있는지?
// k층  사는 사람은
// i호에는 i명이 산다.(즉 1호에는 1명이 산다.)

#include <stdio.h>

int main()
{

    int T; //테스트 케이스

    int i, j;

    int k, n; //k는 층수, n는 호실.

    scanf("%d", &T);
    

    while (T--)
    {

        scanf("%d %d", &k, &n);

        int A[n];

        for (j = 0; j < n; j++)
        {
            A[j] = j + 1;
        }

        for (i = 1; i <= k; i++)
        {
            for (j = 1; j < n; j++)
            {

                A[j] = A[j - 1] + A[j];

            }
        }

        j--;
        printf("%d\n", A[j]);

    }

    return 0;
}