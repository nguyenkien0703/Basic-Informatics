#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

#define ll long long

void check(char c[]){

    int cnt =0;
    int l=0,r=strlen(c)-1;
    while(l<r){
        if(c[l]!=c[r]){
            ++cnt;
        }
        ++l;--r;
    }
    if((strlen(c)%2==0&&cnt==1)||(strlen(c)%2==1&&cnt<=1)){
        printf("YES");
    }else{
        printf("NO");

    }


}
int main(){
    int t ;
    scanf("%d",&t);
    getchar();
    while(t--){

        char c[200];
        gets(c);
        check(c);
        printf("\n");




        
    }
    
}
