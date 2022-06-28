
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

#define ll long long
ll lon(ll a, ll b) {
    return a>b?a:b;
}

ll tn(ll n){
    ll rev=0, tmp=n;
    while(n>0){
        rev=rev*10+n%10;
        n/=10;
    }
    return rev==tmp;
}
ll chuso9(ll n){
    while(n>0){
        ll r=n%10;
        if(r==9){
            return 0;
        }
        n/=10;
    }
    return 1;
}
int main(){

    ll n,cnt=0;
    scanf("%lld",&n);
    for(ll i=2; i<n; i++){
        if(tn(i)&&chuso9(i)){
             cnt++;

        }
    }
    for(ll i=2; i<n; i++){
        if(tn(i)&&chuso9(i)){
            printf("%lld ",i);
        }
    }

    printf("\n");
    printf("%lld",cnt);

    return 0;
}



