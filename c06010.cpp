
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int chan(char c[]){
    for(int i=0;i<strlen(c);i++){
        if((c[i]-'0')%2==1){
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
        if(chan(c)&&tn(c)){
            printf("YES");
        }else{
            printf("NO");
        }
        printf("\n");




    }
    
    
}
