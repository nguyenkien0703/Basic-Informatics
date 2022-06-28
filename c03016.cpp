
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

#define ll long long
ll lon(ll a, ll b) {
    return a>b?a:b;
}
ll fb[100];
void init(){
    fb[0]=0;
    fb[1]=1;
    for(ll i=2;i<=92;i++){
        fb[i]=fb[i-1]+fb[i-2];
       
    }
}
ll check(ll n){
    if(n==0||n==1){
        return 1;
    }
    fb[0]=1;
	fb[1]=1;
	for(int i=2;i<=92;i++){
		 fb[i]=fb[i-1]+fb[i-2];
		if(n==fb[i]){
			return 1 ;
			fb[i-2]=fb[i-1];
			fb[i-1]=fb[i];
		}
	}
    return 0;
}

int main(){
	int t ;
    scanf("%d",&t);
    while(t--){
        init();
        ll n;
        scanf("%lld",&n);
        if(check(n)){
            printf("YES");
        }else{
            printf("NO");

        }
        printf("\n");
    }
    return 0;
}



