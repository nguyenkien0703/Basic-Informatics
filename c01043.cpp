/*
145-> 1 

*/


#include<stdio.h>
#include<math.h>
//using namespace std ;

#define ll long long 
#define foru(i,a,b) for(int i=a;i<=b;++i)
ll mu(ll n){
	ll tich=1;
	for(ll i=1;i<=n;i++){
		tich*=i;
	}
	return tich;
}
ll check(ll n){
	ll sum=0;
	while(n!=0){
		sum+=mu(n%10);
		n/=10;
	}
	return sum;
}




int main(){
//	int t ;
//	scanf("%d",&t);
//	while(t--){
	ll n;
	scanf("%lld", &n);

	if(check(n)==n){
		printf("%d",1);
	}else{
		printf("%d",0);
	}
	return 0;
}