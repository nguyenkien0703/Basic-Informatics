#include<stdio.h>
#include<math.h>
#define ll long long 

void pt(ll n){
    for(ll i=2;i*i<=n;i++){
        while(n%i==0){
            printf("%lld",i);
            n/=i;
            if(n!=1){
                printf("x");
            }
        }
    }
    if(n!=1){
        printf("%lld",n);
    }
}




int main(){
    ll n;
    scanf("%lld",&n);
    pt(n);




}