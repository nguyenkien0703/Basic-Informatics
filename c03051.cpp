
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#define ll long long 



ll prime[1000001];
void sieve(){
    for(ll i=2;i<=1000000;i++){
        prime[i] =1;
    }
    prime[0]=prime[1]=0;
    for(ll i=1;i<=sqrt(1000000);i++){
        if(prime[i]){
            for(ll j=i*i;j<=(1000000);j+=i){
                prime[j]=0;
            }
        }

    }
}


int main(){
    int t ;
    scanf("%d",&t);
    while(t--){
        sieve();
        ll l , r,cnt=0;
        scanf("%lld%lld",&l,&r);
        for(ll i=sqrt(l);i<=sqrt(r);i++){
            if(prime[i]){
                ++cnt;
            }
        }
        printf("%lld",cnt);
        printf("\n");
    }
}