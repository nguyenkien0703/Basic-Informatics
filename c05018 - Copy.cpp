
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

#define ll long long
int main() {
    int t ;
    scanf("%d", &t);
    for(int z=1; z<=t; z++) {
        printf("Test %d:\n",z);
        int n ; scanf("%d", &n);; 
        int a[n][n], cnt=n*n;
        int h1=0, h2=n-1, c1=0, c2=n-1;
        while(h1<=h2 && c1 <= c2){
            //xây dựg hàng trên cùng 
            for(int i=c1;i<=c2;i++) {
                a[h1][i] = cnt;
                --cnt;
            }
            ++h1;
            //xây dựng cạnh bên phải 
            for(int i=h1;i<=h2;i++) {
                a[i][c2] = cnt;
                --cnt;
            }
            --c2;
            //xây đưngk cạnh bên dưới
            if(c1<=c2){
                for(int i=c2;i>=c1;i--) {
                    a[h2][i] = cnt;
                    --cnt;
                }
                --h2;
            }
            //xây dựng cạnh bên trái 
            if(h1<=h2) {
                for(int i=h2;i>=h1;i--) {
                    a[i][c1] = cnt;
                    --cnt ;
                }
                ++c1;
            }
        }
        for(int i=0;i<n;i++) {
            for(int j=0;j<n;j++) {
                printf("%d ",a[i][j]);
            }
            printf("\n");
        }
            printf("\n");

    }
  return 0;
}