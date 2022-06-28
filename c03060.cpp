/*
Cho hai số nguyên dương n và k. Hãy kiểm tra xem giai thừa của n (n!) có chia hết cho 2k hay không
tách hàm gt ra n số 2 ; nếu n>=k thì chia hết ez
*/
#include <stdio.h>
#include <math.h>
int gt(int n)
{
    int dem = 0;
    while (n > 1)
    {
        int t = n;
        while (t % 2 == 0)
        {
            dem++;
            t /= 2;
        };
        n--;
    }
    return dem;
}
int main()
{
    int n, k;
    scanf("%d%d", &n, &k);
    if (gt(n) >= k)
        printf("Yes");
    else
        printf("No");
}