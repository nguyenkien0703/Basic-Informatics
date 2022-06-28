/*
6 -> 1

*/
#include<stdio.h>
#include<math.h>
//using namespace std ;

#define ll long long 
#define foru(i,a,b) for(int i=a;i<=b;++i)




int main(){
//	int t ;
//	scanf("%d",&t);
//	while(t--){
	ll n;
	scanf("%lld",&n);
	ll sum=1;
	for(ll i=2;i*i<=(n);i++){
		if(n%i==0){
			sum+=i;
			if(n!=(n/i)){
				sum+=(n/i);
			}
		}
	}
	if(sum==n){
		printf("%d",1);
	}else{
		printf("%d",0);
	}

	return 0;
}

