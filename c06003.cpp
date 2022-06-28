#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

#define ll long long

int main(){
	int t ;
    scanf("%d",&t);
    getchar();
    while(t--){
        char c[200];
        gets(c);
        char *token = strtok(c," ");
        int cnt=0;
        while(token !=NULL){
            ++cnt;
            token=strtok(NULL," ");
        }
        printf("%d",cnt);
        printf("\n");
    }
    return 0;
}