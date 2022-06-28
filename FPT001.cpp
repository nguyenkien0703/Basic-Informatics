#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#define foru(i,a,b) for(ll i=a;i<=b;i++)
#define ford(i,b,a) for(ll i=b;i>=a;i--)
#define ll long long

int main(){
    ll m ;
    scanf("%lld", &m);
    ll a[m][m];
    for(ll i=0;i<m;i++){

        for(ll j=0;j<=i;j++){
            printf("%lld ",0);
        }

        for(ll j=1;j<=m-1-i;j++){
            printf("%lld ",j);
        }
        printf("\n");
    }

    
}
