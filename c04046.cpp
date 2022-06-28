
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#define ll long long 

int cmp(const void *a, const void *b){
    int *x=(int*)a;
    int *y=(int*)b;
    return *x-*y;
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int a[n];
        for(int i=0; i<n; i++){
            scanf("%d",&a[i]);

        }
        qsort(a, n, sizeof(int),cmp);
        int cnt=0;//đếm só cặp thành phố có khoảng cách nhỏ nhaát;
        int res=2e9+111;//lưu kì lúc khoảng các nhỏ nhất giữa 2 thành phố
        for(int i=1;i<n;i++){
            if(a[i]-a[i-1]<res){
                res=a[i]-a[i-1];
                cnt=1;
            }else if(a[i]-a[i-1]==res){
                ++cnt;
            }
        }
        
        printf("%d %d ",res,cnt);
        printf("\n");


    }
    


}