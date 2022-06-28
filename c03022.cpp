
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

#define ll long long
ll lon(ll a, ll b) {
    return a>b?a:b;
}

ll nt(ll n){
    for(ll i=2;i*i<=n;i++){
        if(n%i==0){
            return 0;
        }
    }
    return n>1;

}
ll tongchuso(ll n){
    ll sum=0;
    while(n>0){
        sum+=n%10;
        n/=10;
    }
    if(sum%5==0)
        return 1;
        return 0;
}
int main(){

    ll n,cnt=0;
    scanf("%lld",&n);
    for(ll i=2; i<n; i++){
        if(nt(i)&&tongchuso(i)){
            ++cnt;
        }
    }
    for(ll i=2; i<n; i++){
        if(nt(i)&&tongchuso(i)){
            printf("%lld ",i);
        }
    }

    printf("\n");
    printf("%lld",cnt);

    return 0;
}



