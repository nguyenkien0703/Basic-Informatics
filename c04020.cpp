#include<stdio.h>
#include<math.h>
#define ll long long 

int main(){


    ll n,cnt;
    scanf("%lld",&n);
    ll a[n];
    for(ll i=0;i<n;i++){
        scanf("%lld",&a[i]);
    }
    scanf("%lld",&cnt);
    for(ll i=cnt;i<n;i++) {
        printf("%lld ",a[i]);
    }
    for(ll i=0;i<cnt;i++) {
        printf("%lld ",a[i]);
    }
    
    

    



}