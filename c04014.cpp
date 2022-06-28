/*
đếm số lần xuất hiện 1

Viết chương trình nhập vào mảng một chiều n phần tử (1 < n < 100) và thực hiện in ra các phần tử cùng số lần xuất hiện của chúng trong mảng. Các phần tử liệt kê theo thứ tự xuất hiện.
*/


#include<stdio.h>
#include<math.h>
#define ll long long 
ll cnt[100001]={0};

int main(){
    ll n;
    scanf("%lld",&n);
    ll a[n];
    for(ll i=0;i<n;i++){
        scanf("%lld",&a[i]);
    }
    for(ll i=0;i<n;i++){
        cnt[a[i]]++;
    }

    for(ll i=0;i<n;i++){
        if(cnt[a[i]]!=0){
            printf("%lld %lld\n",a[i],cnt[a[i]]);
            cnt[a[i]]=0;
        }        
    }



}