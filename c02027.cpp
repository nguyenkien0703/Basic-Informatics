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
        int cnt;
        if(i%2==0) cnt=i*(i+1)/2;
        else cnt=i*(i+1)/2-i+1;
        for(int j=1;j<=i;j++){
            if(i%2==0) printf("%c ",96+cnt--);
            else printf("%c ",96+cnt++);
        }
        printf("\n");

	}

	return 0;
}
