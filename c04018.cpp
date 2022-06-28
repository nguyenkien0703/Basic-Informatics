#include<stdio.h>
#include<math.h>
#define ll long long 

int main(){
    int t;
    scanf("%d",&t);
    while(t--){

        ll n;
        scanf("%lld",&n);
        ll a[n];
        for(ll i=0;i<n;i++){
            scanf("%lld",&a[i]);
        }
        ll cnt=0;
        for(ll i=0;i<n-1;i++){
            if(a[i]==a[i+1]){
                ++cnt;
            }
        }
        printf("%lld\n",cnt);
    }

    



}