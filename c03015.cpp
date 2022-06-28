
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

#define ll long long
ll lon(ll a, ll b) {
    return a>b?a:b;
}
ll pt(ll n){
    ll lonnhat=-1e9;
    for(ll i=2;i*i<=n;i++){
        while(n%i==0){
            // lonnhat=lon(lonnhat,i);
            n/=i;
        }
    }
    if(n!=1){
        lonnhat=lon(lonnhat,n);
    }
    return lonnhat;
    
}

int main(){
	int t ;
    scanf("%d",&t);
    while(t--){

        ll n;
        scanf("%lld",&n);
        printf("%lld",pt(n));
        printf("\n");
    }
    return 0;
}



