#include<stdio.h>
#include<math.h>


#define ll long long 
#define foru(i,a,b) for(ll i=a;i<=b;i++)
#define ford(i,b,a) for(int i=b;i>=a;i--)
ll nt(ll n){
    for(ll i=2;i*i<=n;i++){
        if(n%i==0) return 0;
    }
    return n>1;
}
ll check1(ll n){
    ll sum=0;
    while(n>0){
        sum+=(n%10);
        n/=10;
    }
    return (nt(sum));
}
ll chuso(ll n){
    while(n>0){
    
        ll r=n%10;
        if(!nt(r)){
            return 0;
        }
        n/=10;
    }
    return 1;

}



int main(){
	int t ;
	scanf("%d",&t);
	while(t--){
		ll a, b;
        scanf("%lld%lld",&a,&b);
        ll cnt=0;
        for(ll i=a;i<=b;i++){
            if(chuso(i)&&check1(i)&&nt(i)){
                ++cnt;
            }
        }
        printf("%lld",cnt);
        printf("\n");
		
	
	}
	return 0;
}





