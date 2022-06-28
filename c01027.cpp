/*
2
2 10
2
5 1
1


*/
#include<stdio.h>
#include<math.h>
//using namespace std ;

#define ll long long 


ll check( unsigned ll a,unsigned ll b){
	if(a ==0 || b ==0)
    return a+ b;
    while(a != b){
        if(a>b)
        a = a-b;
        else 
        b= b-a;
    }
    return a ;
		
	
}


int main(){
	int t ;
	scanf("%d",&t);
	while(t--){
		unsigned ll  n,m;
		scanf("%lld%lld",&n,&m);
		printf("%d\n",check(n,m));
		
	
	}
	return 0;
}
