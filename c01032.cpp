#include<stdio.h>
#include<math.h>
#define ll long long 

ll pt(ll n){
    ll sum=0;
    for(ll i=2;i*i<=n;i++){
        while(n%i==0){
            sum+=i;
            n/=i;
        }
    }
    if(n!=1){
        sum+=n;
    }
    return sum;
}




int main(){


    ll n;
    scanf("%lld",&n);
    ll a[n];
    for(ll i=0;i<n;i++){
        scanf("%lld",&a[i]);
    }
    ll ans=0;
    for(ll i=0;i<n;i++){
        ans+=pt(a[i]);
    }
    printf("%lld",ans);





}