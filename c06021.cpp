
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
int check1(char c[]){
    int chan =0,le=0;
    for(int i=0;i<strlen(c);i++){
        int r=c[i]-'0';
        if(r%2==0){
            ++chan;
        }else{
            ++le;
        }
    }
    if((chan>le&&(chan+le)%2==0)||(le>chan&&(chan+le)%2!=0)){
        return 1 ;
    }else{
        return 0 ;
    }
}
int main(){
	int t ;
    scanf("%d",&t);
    getchar();
    while(t--){

        char c[1005];
        gets(c);
        if(check(c)==1){
           if(check1(c)==1){
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



