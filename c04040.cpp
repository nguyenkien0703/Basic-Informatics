#include<stdio.h>
#include<math.h>
#define ll long long 
ll cnt[100001]={0};
ll lonnha(ll a, ll b){
    return a>b?a:b;
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        ll n;
        scanf("%lld",&n);
        ll a[n];for(ll i=0;i<n;i++){ scanf("%lld",&a[i]);}
        ll sum1=0,sum2=0;
        for(ll i=0;i<n;i++){ 
            sum1+=a[i];
            sum2=lonnha(sum2,sum1);
            if(sum1<0) sum1=0;
        }
        printf("%lld",sum2);
        printf("\n");
    }




}