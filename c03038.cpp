
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

#define ll long long
int dem(int n, int p){
    int ans =0;
    for(int i=p;i<=n;i+=p){
        int tmp=i;
        while(tmp%p==0){
            ++ans;
            tmp/=p;
        }
    }
    return ans;
}
int main(){
	int t ;
    scanf("%d",&t);
    while(t--){
       int n, p;
       scanf("%d%d",&n,&p);;
       printf("%d\n",dem(n,p));
        printf("\n");
    }
    return 0;
}



