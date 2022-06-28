
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

#define ll long long
int fb[81];

void init(){
    fb[0]=0;
    fb[1]=1;
    for(int i=2;i<=92;i++){
        fb[i]=fb[i-1]+fb[i-2];
        
    }
 
}
int main() {
    init();
   int n ; scanf("%d", &n);; 
    //baay h casi bieens cnt  ở đây làm nhệm vụ là đánh dấu chỉ số của các số trog cái mảng p
    long long  a[n][n], cnt=0;
    int h1=0, h2=n-1, c1=0, c2=n-1;
    while(h1<=h2 && c1 <= c2){
        //xây dựg hàng trên cùng 
        for(int i=c1;i<=c2;i++) {
            a[h1][i] = fb[cnt];
            ++cnt;
        }
        ++h1;
        //xây dựng cạnh bên phải 
        for(int i=h1;i<=h2;i++) {
            a[i][c2] = fb[cnt];
            ++cnt;

        }
        --c2;
        //xây đưngk cạnh bên dưới
        if(c1<=c2){
            for(int i=c2;i>=c1;i--) {
                a[h2][i] = fb[cnt];
                ++cnt;
            }
            --h2;
        }
        //xây dựng cạnh bên trái 
        if(h1<=h2) {
            for(int i=h2;i>=h1;i--) {
                a[i][c1] =fb[cnt];
                ++cnt;
            }
            ++c1;
        }
    }
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            printf("%lld ",a[i][j]);
        }
        printf("\n");
    }
  return 0;
}