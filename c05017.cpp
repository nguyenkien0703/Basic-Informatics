#include "stdio.h"
void mtrxoanocnguoc(int a[100][100], int *m, int *n)
{
    int i, j;
    int dev = 0;
    for (i = 0; i < *m; i++)
    {
        for (j = i; j < *n - i; j++) // ngang 
        {
            printf("%d ", a[i][j]);
        dev++;
    }
    if (dev == *m * *n)
    {
        break;
    }
    for (j = i + 1; j < *m - i; j++) // xuong
     {
        printf("%d ", a[j][*n - i - 1]);
    dev++;
}
if (dev == *m * *n)
{
    break;
}
for (j = *n - i - 2; j >= i; j--) // ngang 
{
    printf("%d ", a[*m - i - 1][j]);
dev++;
}
if (dev == *m * *n)
{
    break;
}
for (j = *m - i - 2; j > i; j--) // len 
{
    printf("%d ", a[j][i]);
dev++;
}
if (dev == *m * *n)
{
    break;
}
}
}
main()
{
    int x;
    scanf("%d", &x);
    while (x--)
    {
        int m, n;
        scanf("%d %d", &m, &n);
        int a[100][100];
        int b[10000];
        int dem = 0, i, j;
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                scanf("%d ", &a[i][j]);
            }
        }
        mtrxoanocnguoc(a, &m, &n);
        printf("\n");
    }
}