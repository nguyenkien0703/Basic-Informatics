
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

#define ll long long
int main(){
    int t ;
    scanf("%d",&t);
    for(int z=1;z<=t;z++){
        int n;
        scanf("%d",&n);
        int a[n];
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);

        }
        int res=1,cnt=0,b[n],dem=1;
        b[0]=0,cnt=1;
        for(int i=1;i<n;i++){
            if(a[i]>a[i-1]) dem++;
            else dem=1;
            if(dem> res){
                res=dem;cnt=1;
                b[0]=i-res+1;
            }else if(dem==res){
                b[cnt]=i-res+1;
                ++cnt;
            }
        }
        printf("Test %d:\n",z);
        printf("%d\n",res);
        for(int i=0;i<cnt;i++){
            for(int j=0;j<res;j++){
                printf("%d ",a[b[i]+j]);
            }
            printf("\n");
        }
        printf("\n");

    }
    
}
