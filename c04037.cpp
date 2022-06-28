#include<stdio.h>
#include<math.h>
#define ll long long 
ll cnt[26]={0};
int main(){
    ll n,dem=0;
    scanf("%lld",&n);
    ll a[n];
    for(ll i=0;i<n;i++){
        scanf("%lld",&a[i]);
    }
    for(ll i=0;i<n;i++){
        cnt[a[i]]++;
    }
    for(ll i=0;i<26;i++){
        if(cnt[i]>1){
           dem++;
        }        
    }
    printf("%lld\n",dem);
    for(ll i=0;i<n;i++){
        if(cnt[a[i]]!=1){
           printf("%lld ",a[i]);
           cnt[a[i]]=1;
        }        
    }




}