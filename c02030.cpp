#include <iostream>
#include <cmath>
#define ll long long 
using namespace std;
ll nt(ll n){
	for(int i=2;i*i<=n;i++){
		if(n%i==0) return 0;
	}
	return n>1;

}
int main(){
	int t ;
	cin>> t;
	while(t--){
		int n ;
		cin>>n ;
		int cnt=0;
		if(nt(n)) ++cnt;
		for(int i=2;i<=n/2;i++){
			int sum=0;
			if(nt(i)){
				for(int j=i;i<=n;j++)?
				if(nt(j)){
					sum+=j;
					if(sum==n) ++cnt;
					if(sum>n) break;
				}
			}
		}
		cout<<cnt<<endl;
	}
	
}
