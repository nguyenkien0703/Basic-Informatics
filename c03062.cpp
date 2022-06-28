#include <stdio.h>
long long lcd(long long a, long long b)
{
    long long p = a * b;
    while (b != 0)
    {
        long long tmp = a % b;
        a = b;
        b = tmp;
    }
    return p / a;
}
int main()
{
    long long t, n,m;
    scanf("%lld", &t);
    while (t--)
    {
        scanf("%lld%lld", &n,&m);
        long long uc = 1;
        for (long long i = n; i <= m; i++)
        {
            uc = lcd(uc, i);
        }
        printf("%lli \n", uc);
    }
}