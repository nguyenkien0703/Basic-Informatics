#include<stdio.h>
#include<math.h>

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second

void pt(ll n){
	for(ll i=2;i*i<=n;i++){
		if(n%i==0){
			ll cnt=0;
			while(n%i==0){
				++cnt;
				n/=i;
			}
			printf("%lld^%lld",i,cnt);
			if(n!=1){
				printf(" * ");
			}
		}
	}
	if(n!=1){
		printf("%lld^1",n);
	}
	
}

int main(){
    int t ;
    scanf("%d",&t);
    while(t--){
        ll n;
        scanf("%lld",&n);
        printf("%lld = ",n);
        pt(n);
        printf("\n");
    }
}