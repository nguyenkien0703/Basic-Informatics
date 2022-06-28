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
    ll a[m];

    double ans ;
    for(ll i=0;i<m;i++) {
        scanf("%lld", &a[i]);
        ans+=a[i];
    }
    printf("%.3lf", (double)ans/m);

    
}
