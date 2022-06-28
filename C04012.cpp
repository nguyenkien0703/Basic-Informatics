/*xuẩ hiện nhiều hơn 1 lần 
7

2 3 3 2 1 9 5
-->
2 3
*/



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
    for(ll i=0;i<n;i++){
        if(cnt[a[i]]!=1){
           printf("%lld ",a[i]);
           cnt[a[i]]=1;
        }        
    }




}