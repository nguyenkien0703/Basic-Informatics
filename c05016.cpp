
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

#define ll long long
int main() {
    int n ; scanf("%d",&n) ;
    int a[n][n], cnt =1;//kh?i t?o 1 bi?n đ? khi duy?t qua t?ng cái đ? g?n  value cho nó 
    int h1 =0, h2 =n-1, c1=0, c2= n-1;
    while(h1<=h2 && c1 <=c2) {
        //xây d?ng hàng đ?u tiên 
        for(int i= c1;i<=c2;i++){
           a[h1][i] = cnt;
           ++cnt;
        }
        ++h1;
        //xây d?ng c?nh bên ph?i 
        for(int i=h1;i<=h2;i++) {
            a[i][c2] =cnt;
            ++cnt;
        }
        --c2;
        if(c1<=c2) {
            //xây đ?ng c?nh bên dư?i 
            for(int i=c2;i>=c1;i--) {
                a[h2][i] = cnt;
                ++cnt;
            }
            --h2;
        }
        
        if(h1<=h2){
            //xây d?ng c?nh bên trái 
            for(int i=h2;i>=h1;i--) {
                a[i][c1] = cnt;
                ++cnt;
            }
             ++c1;
        }
       
    } 
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++) {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}

