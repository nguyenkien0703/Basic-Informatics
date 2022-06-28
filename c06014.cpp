
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

#define ll long long
void  chuanhoa(char c[]){
    c[0] = toupper(c[0]);
    for(int i=1;i<strlen(c);i++) {
        c[i]= tolower(c[i]);
    }
}
int main(){
	int t ;
    scanf("%d",&t);
    getchar();
    while(t--){

        char c[1005];
        gets(c);
 
        char *token=strtok(c, " ");
        char a[20][50];
        int n=0;
        while(token!=NULL){
            strcpy(a[n++],token);
            token = strtok(NULL," ");
        }
        for(int i=0;i<n;i++){
            chuanhoa(a[i]);
            printf("%s",a[i]);
            if(i!=n-1){
                printf(" ");
            }


        }
        printf("\n");
    }

    return 0;
}



