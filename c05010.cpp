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
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=n-1;j>=i;j--){
            if(nt(a[i][j])){
                sum+=a[i][j];
            }
        }
    }
    printf("%d\n",sum);


}