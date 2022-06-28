// 2

// 10

// 20

// 2 5

// 2 2 5
#include<stdio.h>
#include<math.h>


#define ll long long 


void PhanTich(  ll n){
	for(ll i=2;i<=sqrt(n);i++){
		while(n%i==0){
			printf("%lld ",i);
			n/=i;
		}
	}
	if(n!=1){
		printf("%lld",n);
	}
	printf("\n");
	
		
	
}


int main(){
	int t ;
	scanf("%d",&t);
	while(t--){
		ll n;
		scanf("%lld",&n);
		PhanTich(n);
		
	
	}
	return 0;
}