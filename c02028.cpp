/*
tam fgiác kí tự 2 
4
->
ACEG

CEG

EG

G
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
    //coi A là số 1 m c là số 3 ,e là số 5 , g là số 7 
    int n;
    scanf("%d",&n);

    if(1<=n&&n<=20){
        for(int i=1;i<=n;i++){
            int init=2*i-1;
            for(int j=1;j<=n-i+1;j++) {
                printf("%c",64+init);
                init+=2;
            }
            printf("\n");
        }
    }


    
}