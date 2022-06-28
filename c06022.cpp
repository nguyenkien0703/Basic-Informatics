
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

#define ll long long
char c[500],d[500];
char* strlwr(char c[]){
    for(int i=0;i<strlen(c);i++){
        if(c[i]>='A'&&c[i]<='Z'){
            c[i]+=32;
        }
    }
    return c;
}
int min(int a, int b){
    return a<b? a: b;
}
// k dc dùng hàm strcmpi nữa 

char a[50][50];
int main(){
    int t ;
    scanf("%d",&t);
    getchar();
    for(int z=1;z<=t;z++){

        gets(c);
        gets(d);

        char *token=strtok(c, " ");
        int n=0;

        while(token !=NULL){
            if(strcmpi(token,d)!=0){
        
                strcpy(a[n++],token);

            }
            token =strtok(NULL, " ");
        }
        printf("Test %d: ",z);
        for(int i=0;i<n;i++){
            printf("%s ",a[i]);
        }


        printf("\n");

    }
    
    
}
