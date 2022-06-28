
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

#define ll long long

int check(char c[]){
    if(c[0]=='0') return 0;
    for(int i=1;i<strlen(c);i++){
        if(!(isdigit(c[i]))){
            return 0;
        }else{
            continue;
        }
        
    }
    return 1 ;
}

int pagram1(char c[]){
    int cnt[10]={0};
    for(int i=0;i<strlen(c);i++){
        cnt[c[i]-'0']=1;
    }
    for(int i=0;i<10; i++){
        if(cnt[i]==0){
            return 0;
        }
    }
    return 1;
}

int main(){
	int t ;
    scanf("%d",&t);
    getchar();
    while(t--){

        char c[1005];
        gets(c);
        if(check(c)==1){
           if(pagram1(c)==1){
               printf("YES");
           }else{
               printf("NO");

           }
        }else{
            printf("INVALID");
        }
        printf("\n");
    
    }
    return 0;
}



