#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

#define ll long long
char* strlwr(char c[]){
    for(int i=0; i<strlen(c);i++){
        if(c[i]>='A'&&c[i]<='Z'){
            c[i]+=32;
        }
    }
    return c;
}
int b[200]={0};
int main(){

    char c[200];
    gets(c);
    strlwr(c);
    char *token = strtok(c," ");
    char a[20][50];
    int n=0;    
    while(token !=NULL){
        strcpy(a[n],token);
        n++;
        token=strtok(NULL," ");
    }
    for(int i=0;i<n;i++){
        if(b[i]==0){
            int cnt=1;
            for(int j=i+1;j<n;j++){
                if(strcmp(a[i],a[j])==0){
                    ++cnt;
                    b[j]=1;
                }
            }
            printf("%s %d",a[i],cnt);
        }
        printf("\n");
    }
    
}
