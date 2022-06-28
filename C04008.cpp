#include<stdio.h>
#include<math.h>
#include<string.h>
void nhapA(int a[],int n){
	for(int i=0;i<n;i++){ 
		scanf("%d",&a[i]); 
	} 
}
void nhapB(int b[],int m){ 
	for(int i=0;i<m;i++){ 
		scanf("%d",&b[i]); 
	} 
} 
void xuatB(int b[],int m){ 
	for(int i=0;i<m;i++){ 
		printf("%d ",b[i]); 
	}
}
int main(){ 
    int t ;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        printf("Test %d:\n",i);

        int a[100],b[100],n,m,x; 
        scanf("%d%d%d",&n,&m,&x); 
        nhapA(a,n); 
        nhapB(b,m); 
        for(int j=0;j<x;j++) 
        printf("%d ",a[j]); 
        xuatB(b,m); 
        for(int j=x;j<n;j++) 
        printf("%d ",a[j]); 
        printf("\n");
    }
	return 0; 
}
#include<stdio.h>
#include<math.h>
#include<string.h>

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second

int t,n,m,a[105],b[105],p,i,j;

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    scanf("%d",&t);
    for(i=1;i<=t;++i){
        scanf("%d%d%d",&n,&m,&p);
        for(j=0;j<n;++j) scanf("%d",&a[j]);
        for(j=0;j<m;++j) scanf("%d",&b[j]);
        printf("Test %d:\n",i);
        for(j=0;j<p;++j) printf("%d ",a[j]);
        for(j=0;j<m;++j) printf("%d ",b[j]);
        for(j=p;j<n;++j) printf("%d ",a[j]);
        printf("\n");
    }
}