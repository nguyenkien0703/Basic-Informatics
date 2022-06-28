/*
tam giác kí tự 5
5
->
	
DEFGH

CDEF

BCD

AB

@
*/

/*
làm ra dc cái output như sau là oke 
45678
3456
234
12
0
*/
#include<stdio.h>
#include<math.h>

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second


int main(){
    int n;
    scanf("%d",&n);

    if(1<=n&&n<=20){
        for(int i=1;i<=n;i++){
            int init=n-i;
            for(int j=1;j<=n-i+1;j++) {
                printf("%c",64+init);
                init++;
            }
            printf("\n");
        }
    }


    
}
