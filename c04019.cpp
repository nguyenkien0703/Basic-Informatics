#include <stdio.h>
int main()
{
    int t, n, A[100], B[99999];
    scanf("%d", &t);
    while (t--)
    {
        int B[30000] = {};
        scanf("%d", &n);
        int m = 0;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &A[i]);
            B[A[i]]++;
        }
        for (int i = 0; i < n; i++)
        {
            if (B[A[i]] > m)
                m = B[A[i]];
        }
        for (int i = 0; i < n; i++)
        {
            if (B[A[i]] == m)
            {
                B[A[i]] = 0;
                printf("%d ", A[i]);
            }
        }
        printf("\n");
    }
}