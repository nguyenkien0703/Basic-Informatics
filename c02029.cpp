#include<stdio.h>
#include<math.h>


#define ll long long 
#define foru(i,a,b) for(ll i=a;i<=b;i++)
#define ford(i,b,a) for(int i=b;i>=a;i--)
int min(int a,int b){
	return (a <b) ? a : b;
}
//anh andrew giaingr ở list vẽ hình , đã luuw ở danh scsh phát 
int main(){

int  n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		int init=i;
        int cnt=n-1;
        for(int j=1;j<=i;j++){
            printf("%c ",64+init);
            init+=cnt;
            --cnt;
        }
        printf("\n");

       
	}
	

	
	
	return 0;
}





