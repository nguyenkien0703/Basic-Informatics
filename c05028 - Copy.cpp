#include<stdio.h>
#include<math.h>

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second

int n,i,j,z,t,kt,ans;
char a[15][15];

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    scanf("%d",&n);
    scanf("\n");
    for(i=0;i<n;++i){
        for(j=0;j<n;++j) scanf("%c",&a[i][j]);
        scanf("\n");
    }
    ans=0;
	//break để thoát khỏi từng vòng lặp chứ k là nó cứ chạy như vậy , nó k in ra kết quả đâu 

    while (1){
        kt=0;//kiểu như m hay dùng biến như biến ok ý 
        for(i=n-1;i>=0;--i){
            for(j=n-1;j>=0;--j)
                if (a[i][j]=='1'){
                    for(z=0;z<=i;++z)
                        for(t=0;t<=j;++t) a[z][t]=(a[z][t]-'0'+1)%2+'0';
                    ans++;
                    kt=1;
                    break;
                }
            if (kt) break;
        }
        if (!kt) break;
    }
    printf("%d",ans);
}