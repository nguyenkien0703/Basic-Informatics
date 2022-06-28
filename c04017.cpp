#include<stdio.h>
#include<math.h>
#define ll long long 
ll nt(ll n) {
    for(ll  i=2;i*i<=n;i++) {
        if(n%i==0) {
            return 0;
        }
    }
    return n>1;
}
int main(){


    ll n;
    scanf("%lld",&n);
    ll a[n];
    for(ll i=0;i<n;i++){
        scanf("%lld",&a[i]);
    }
    ll dem=0;
    for(ll i=0;i<n;i++){
       if(nt(a[i])){
          dem++;
       }
    }
    printf("%lld ",dem);
    for(ll i=0;i<n;i++){
       if(nt(a[i])){
          printf("%lld ",a[i]);
       }
    }
    



}