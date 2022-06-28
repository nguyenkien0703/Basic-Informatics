/*
hình chữ nhật  kí tự 4 
4 4

DDDD

CDDD

BCDD

ABCD

3 5

CDEEE

BCDEE

ABCDE

5 3

CCC

CCC

CCC

BCC

ABC
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
	for(int i=n;i>=1;i--){
        int init=min(i,m);
        for(int j=1;j<=m;j++){
            if(j<=m-i){
                printf("%c",64+init++);
            }else printf("%c",64+init);
        }
        printf("\n");
    }
	

	
	
	return 0;
}





