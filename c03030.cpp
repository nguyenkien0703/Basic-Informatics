#include<stdio.h>
#include<math.h>


#define ll long long 
#define foru(i,a,b) for(ll i=a;i<=b;i++)
#define ford(i,b,a) for(int i=b;i>=a;i--)
ll tang(ll n){
	while(n>=10){
		//lay ra phan tu cuoi cung cua n  tinh den gia tri hien tai
		int r=n%10;
		if(r<=(n/10)%10)
			return 0;
		n/=10;

	}
	return 1 ;
}

int main(){
	int t ;
	scanf("%d",&t);
	while(t--){
		ll n,a=1,b;
		scanf("%lld",&n);
		for(ll i=0;i<n-1;i++) a*=10;
		b=a*10-1;
		for(ll i=a;i<=b;i++){
			if(tang(i)){
				printf("%lld ",i);
			}
		}
		printf("\n");
		
		
	
	}
	return 0;
}





