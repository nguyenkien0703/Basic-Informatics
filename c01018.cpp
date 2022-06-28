/*
3

11

121

361

NO

YES

YES
*/

#include<stdio.h>
#include<math.h>
// using namespace std ;

#define ll long long 
ll cp(ll n){
	int can= sqrt(n) ;
	if(1ll *can*can == n)
	return 1;
	return 0;
}



int main(){
	int t ;
	scanf("%d",&t);
	while(t--){
		ll n;
		scanf("%lld",&n);
		
		if(cp(n)){
			printf("YES");
		}else{
			printf("NO");
		}
		printf("\n");
	}

}