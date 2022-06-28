/*
hình chữ nhật kí tự 3 
4 4

@ABC

ABCC

BCCC

CCCC

3 5

@ABCD

ABCDD

BCDDD

5 3

@AB

ABB

BBB

BBB

*/

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


    int  n,m;
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		int init=min(i,m);
        for(int j=1;j<=m;j++){
            if(j<=m-i){
                printf("%c",63+init++);
            }else{
                printf("%c",init+63);
            }
        }

		printf("\n");
	}

	return 0;
}





