
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

#define ll long long

ll solve(char c[] ){
	ll dau=c[0]-'0', cuoi=c[strlen(c)-1]-'0';
	if(!(dau==2*cuoi||cuoi==2*dau)) return 0;
	//dùng kĩ thuật 2 con trỏ, 1 thằng duyệt từ chỉ só =1 đến chỉ soó sát cuối , q thẳng duyệt từ chỉ số sát cuối đến chỉ só i=1
	ll l=1, r=strlen(c)-2;
	while(l<r){
		if(c[l]!=c[r])
		return 0;
		++l;--r;
	}
	return 1;

}
int main(){
	
	int t ;
    scanf("%d",&t);

	while(t--){
		char c[20];
		scanf("%s",&c);
		if(solve(c)){
			printf("YES");
		}else{
			printf("NO");


		}
		printf("\n");
	}
	return 0;

}