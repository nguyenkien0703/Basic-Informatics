#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

#define ll long long

int main(){
	
	int t ;
    scanf("%d",&t);

	while(t--){
		ll n;
        scanf("%lld",&n);
        ll a[n];
        for(ll i=0;i<n;i++){
            scanf("%lld",&a[i]);
            if(a[i]>1000){
                return 0;
            }
        }
        ll lonnhat=-1e9;
        for(ll i=0;i<n;i++){
            if(a[i]>lonnhat){
                lonnhat=a[i];
            }
 

        }
        printf("%lld\n",lonnhat);

        for(ll i=0;i<n;i++){
            if(a[i]==lonnhat){
                printf("%lld ",i);
            }
        }

        printf("\n");
	
	return 0;
    }
}