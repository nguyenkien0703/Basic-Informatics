/*
ĐÊM SỐ PHẦN TỬ LỚN HƠN SỐ ĐỨNG TRƯỚC
1
7
3 5 6 8 4 2 9 -> 5
*/
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define ll long long
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {

        int n;
        scanf("%d", &n);
        if (n >= 2 && n <= 50)
        {
            int a[n], cnt = 0;
            for (int i = 0; i < n; i++)
            {
                scanf("%d", &a[i]);
            }
            int lonnhat = a[0];
            for (int i = 0; i < n; i++)
            {
                if (a[i] >= lonnhat)
                {
                    ++cnt;
                }
                if (a[i] > lonnhat)
                {
                    lonnhat = a[i];
                }
            }

            printf("%d\n", cnt);
        }
    }

    return 0;
}
