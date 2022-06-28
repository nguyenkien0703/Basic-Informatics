#include<stdio.h>
#include<math.h>
#define ll long long 
ll cnt[100001]={0};
int main(){
    ll n;
    scanf("%lld",&n);
    ll a[n];
    for(ll i=0;i<n;i++){
        scanf("%lld",&a[i]);
    }
    for(ll i=0;i<n;i++){
        cnt[a[i]]++;
    }
    ll dem=0;
    for(ll i=0;i<n;i++){
        if(cnt[a[i]]==1){
           dem++;
        }        
    }
    printf("%lld\n",dem);
    for(ll i=0;i<n;i++){
        if(cnt[a[i]]==1){
            printf("%lld ",a[i]);
        }        
    }




}