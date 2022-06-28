#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	
	int t; cin>>t;
	while(t--){
		int n,x; cin>>n>>x; int sum = 0; int ma = -1; int arr[n];
		for(int i = 0; i < n; i++){
			cin>>arr[i]; 
			sum += arr[i];
		}
		if((sum%x) != 0) ma = max(ma,n);
		for(int i = 0; i < n; i++){
			if((arr[i]%x) != 0){
				cout<<"max1 lan thu"<<i<<"la\n";
				ma = max(ma,i);
				cout<<ma<<endl;;
				cout<<"max2 lan thu "<<i<<"la\n";
				ma = max(ma,n-(i+1));
				cout<<ma<<endl;
			}
		}
		cout<<ma<<"\n";
	}
}

