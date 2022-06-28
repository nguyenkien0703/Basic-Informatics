/*
1234->10
*/
#include<stdio.h>
#include<math.h>
//using namespace std ;

#define ll long long 


int Tong(int n){
	int sum=0;
	while(n!=0){
		sum+=n%10;
		n/=10;
	}
	return sum;
}

int main(){
//	int t ;
//	scanf("%d",&t);
//	while(t--){
		int n;
		scanf("%d",&n);
		int ans =Tong(n);
		printf("%d",ans);
		
	
//	}

}

