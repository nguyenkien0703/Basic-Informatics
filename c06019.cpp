// NguYEN VAN maNH     
// nvmanh@gmail.com

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
char* strlwr(char c[]){
	for(int i=0;i<strlen(c);i++){
		if(c[i]>='A'&&c[i]<='Z'){
			c[i]+=32;
		}
	}
	return c;
}
int main(){

    char c[1000];
    gets(c);
    strlwr(c);//cho tất cả các kí tự trong mảng c thành kí tự thường
    char  a[10][100];
    int n=0;
    char *token = strtok(c, " ");
    while(token != NULL) {
        strcpy(a[n], token);
        ++n;
        token = strtok(NULL," ");

    }
    for(int i=0;i<n-1;i++) {
        printf("%c",a[i][0]);
    }
    printf("%s",a[n-1]);
    printf("@ptit.edu.vn");
    

}