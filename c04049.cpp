#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

#define ll long long

ll gcd(ll a,ll b){ll r;while(b){r=a%b;a=b;b=r;}return a;}
ll lcm(ll a,ll b){return a/gcd(a,b)*b;}
//hsy , đúng anh lộc ptit rồi 


int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		int a[n + 1];
		for(int i = 1; i <= n; i++) scanf("%d", &a[i]);
		int b[n + 2];
		b[1] = a[1];
		b[n + 1] = a[n];
		for(int i = 2; i <= n; i++){
			b[i] = lcm(a[i - 1], a[i]);
		}
		for(int i = 1; i <= n + 1; i++) printf("%d ", b[i]);
		printf("\n");
	}
}