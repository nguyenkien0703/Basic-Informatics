#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define ll long long 
#define foru(i,a,b) for(int i=a;i<=b;i++)
int lonnhat(int a, int b){
    return a>b?a:b;
}
int nt(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0) return 0;
    }
    return n>1;
}
int main(){

    

    int n;scanf("%d",&n);
    int a[n][n];
    foru(i,0,n-1){
        foru(j,0,n-1){
            scanf("%d",&a[i][j]);
        }
    }
    int res=0,idx;
    for(int i=0;i<n;i++){
        int cnt=0;
        for(int j=0;j<n;j++){
            if(nt(a[i][j])){
                ++cnt;
            }
        }
        //tuyệt chiêu tần suát cà kĩ năng dấu bằng 
        if(cnt>res){
            res=cnt;
            idx=i;
        }
        
    } 
    printf("%d\n",idx+1);
    for(int i=0;i<n;i++){
        if(i!=idx) continue;
        for(int j=0;j<n;j++){
            if(nt(a[i][j])){

            printf("%d ",a[i][j]);
            }
        }
    }

}