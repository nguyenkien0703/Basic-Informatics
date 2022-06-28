/*
1 2
->
3

-1

2

0

1

0.50
*/

#include <stdio.h>
#include<math.h>
//using namespace std;
#define ll long long 


int main ()
{
	ll a , b;
	scanf("%lld%lld",&a,&b);
	if(b==0){
		printf("%d",0);
	}else{
		ll tong=a+b;
		ll hieu=a-b;
		ll tich=a*b;
		ll nguyen=a/b;
//		float thuong=(float)a/b;

		ll du=a%b;
		double thuc=(double)a/b;
		printf("%lld\n%lld\n%lld\n%lld\n%lld\n%.2lf",tong,hieu,tich,nguyen,du,thuc);
	}
	
	return 0;
}