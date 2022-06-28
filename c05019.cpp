
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

#define ll long long
int p[100];
int nt(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return 0;
        }
    }
    return n> 1;
}
void init(){
    int i=0,cnt=0;
    while(cnt<100){
        if(nt(i)){
            p[cnt]=i;
            ++cnt;
        }
        ++i;
    }
}
int main() {
    init();
    int t ;
    scanf("%d", &t);
    for(int z=1; z<=t; z++) {
        printf("Test %d:\n",z);
        int n ; scanf("%d", &n);; 
        //baay h casi bieens cnt  ở đây làm nhệm vụ là đánh dấu chỉ số của các số trog cái mảng p
        int a[n][n], cnt=0;
        int h1=0, h2=n-1, c1=0, c2=n-1;
        while(h1<=h2 && c1 <= c2){
            //xây dựg hàng trên cùng 
            for(int i=c1;i<=c2;i++) {
                a[h1][i] = p[cnt];
                ++cnt;
            }
            ++h1;
            //xây dựng cạnh bên phải 
            for(int i=h1;i<=h2;i++) {
                a[i][c2] = p[cnt];
                ++cnt;

            }
            --c2;
            //xây đưngk cạnh bên dưới
            if(c1<=c2){
                for(int i=c2;i>=c1;i--) {
                    a[h2][i] = p[cnt];
                    ++cnt;
                }
                --h2;
            }
            //xây dựng cạnh bên trái 
            if(h1<=h2) {
                for(int i=h2;i>=h1;i--) {
                    a[i][c1] = p[cnt];
                    ++cnt;
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