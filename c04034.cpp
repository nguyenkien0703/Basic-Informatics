#include <stdio.h>
int main()
{
    int test;
    scanf("%d", &test);
    while (test--)
    {
        int n;
        scanf("%d", &n);
        int a[n];
        int b[n];
        int k = 0;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        int c = a[n - 1];
        /*duyệt từ phải qua trái ,so sánh th hiện tại và thắng lièn kề trc đó , nếu
        lớn hơn thì thêm vào mảng b 
        nếu nhỏ hơn or bằng thì thực hiện đổi chỗ cho hai số này 
        vid mình đg có ý tưởng là so sánh thắng hiện tại và thắng liền kề trc đó mà 
        mà đề lại bảo là số hiện tại phải lớn hớn mọi số đứng bên phải của nó 
        */
        for (int i = n - 1; i >= 1; i--)
        {
            if (a[i] < a[i - 1])
            {
                b[k] = a[i - 1];
                k++;
            }
            else
            {
                int tmp = a[i - 1];
                a[i - 1] = a[i];
                a[i] = tmp;
            }
        }
        for (int i = k - 1; i >= 0; i--)
        {
            printf("%d ", b[i]);
        }
        printf("%d", c);
        printf("\n");
    }
    return 0;
}