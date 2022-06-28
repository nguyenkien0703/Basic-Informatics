
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#define ll long long 


ll cnt[1000001]={0};
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        ll n;
        scanf("%lld",&n);
        ll a[n];
        for(ll i=0; i<n; i++){
            scanf("%lld",&a[i]);

        }
        int ok=0;
        for(ll i=0;i<n;i++){
            if(cnt[a[i]]==1){
                printf("%lld",i+1);
                ok=1;
                break;
            }else{
                cnt[a[i]]=1;
            }
        }
        if(!ok) printf("NO");
        memset(cnt,0,sizeof(cnt));
        printf("\n");
        
    }
    


}