#include<stdio.h>
#include<math.h>

int n,m,k,a,i,x,ans;

int main(){
    scanf("%d",&n);
    scanf("%d",&m);
    scanf("%d",&k);
    x=1;
    ans=0;
    for(i=0;i<m;++i){
        scanf("%d",&a);
        while(x+k<a-k-1){
            ans++;
            x+=(k+1);
        }
        x=a;
    }
    while(x+k<n){
        ans++;
        x+=(k+1);
    }
    printf("%d",ans);
}