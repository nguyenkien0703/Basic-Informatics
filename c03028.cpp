
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

#define ll long long
ll giaithua(ll n){
    if(n==0) return 1;
    else
    return n*giaithua(n-1);
}
int main(){

    ll n;
    scanf("%lld",&n);
    for(ll i=0; i<n; i++){
        for(ll j=0; j<=i; j++){
            printf("%lld ",giaithua(i)/(giaithua(j)*giaithua(i-j)));
        }
        printf("\n");
    }
    return 0;
}



