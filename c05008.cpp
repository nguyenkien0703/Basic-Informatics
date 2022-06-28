#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define ll long long 
int lonnhat(int a, int b){
    return a>b?a:b;
}
int main(){

    int t ;
    scanf("%d",&t);
    for(int z=1;z<=t;z++){
        int n,m;
        scanf("%d%d",&n,&m);
        int a[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                scanf("%d",&a[i][j]);
            }
        }

        int hanglonnhat=-1e9,sum1=0,idx1;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                sum1+=a[i][j];
            }
            if(hanglonnhat<=sum1){
                hanglonnhat=sum1;
                idx1=i;
            }
            sum1=0;
        }
        int cotlonnhat=-1e9,sum2=0,idx2;
        for(int j=0;j<m;j++){
            for(int i=0;i<n;i++){
                if(i==idx1) continue;
                sum2+=a[i][j];
            }
            if(cotlonnhat<=sum2){
                cotlonnhat=sum2;
                idx2=j;

            }
            sum2=0;
        }
        printf("Test %d:\n",z);

        for(int i=0;i<n;i++){
            if(i==idx1) continue;
            for(int j=0;j<m;j++){
                if(j==idx2) continue;
                printf("%d ",a[i][j]);
            }
            printf("\n");
        }
        printf("\n");



    }



}