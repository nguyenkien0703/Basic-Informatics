#include<bits/stdc++.h>
using namespace std;
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
ll lon(ll a, ll b) {
    return a>b?a:b;
}

ll tn(ll n){
    ll rev=0, tmp=n;
    while(n>0){
        rev=rev*10+n%10;
        n/=10;
    }
    return rev==tmp;
}
ll tongchuso(ll n){
    ll sum=0;
    while(n>0){
        sum+=n%10;
        n/=10;
    }
    if(sum%10==0)
        return 1;
        return 0;
}
int main(){
	int t ;
    scanf("%d",&t);
    while(t--){
        ll n,a=1,cnt=0;
        scanf("%lld",&n);
        for(ll i=0;i<n-1;i++){
            a*=10;
        }
        ll b=a*10-1;
        
        for(ll i=a;i<=b;i++){
            if(tongchuso(i)&&tn(i)){
                cnt++;
            }
        }
        printf("%lld",cnt);
        printf("\n");
    }
    return 0;
}



