
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int nt(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return 0;
        }
    }
    return n>1;
}
int check(char c[]){
    for(int i=0;i<strlen(c);i++){
        if(!(nt(c[i]-'0'))){
            return 0;
        }
    }
    return 1;
}
int tn(char c[]){
    int l=0,r=strlen(c)-1;
    while(l<r){
        if(c[l]!=c[r]){
            return 0;

        }
        l++;r--;
    }
    return 1;
}
#define ll long long
int main(){
    int t ;
    scanf("%d",&t);
    getchar();
    while(t--){

        char c[500];
        gets(c);
        if(check(c)&&tn(c)){
            printf("YES");
        }else{
            printf("NO");

        }
        printf("\n");




    }
    
    
}
