#include<math.h>
#include<stdio.h>
#include<string.h>

int  check1(char  s[]){
	for(int i = 0 ; i < 4; i++){
		if(s[i]>=s[i+1])
			return 0;
	}
	return 1;
}
 
int  check2(char s[]){
	char tmp = s[0];
	for(int i=1;i<5;i++){
		if(tmp != s[i]) return 0;
	}
	return 1;
}
 
int  check3(char s[]){
	return (s[0] == s[1] && s[1] == s[2] && s[3] == s[4]);
}
 
int  check4(char s[]){
	for(int i=0;i<strlen(s);i++){

		if(!(s[i] == '6' || s[i] == '8')) return 0;
	}
	return 1;
}
//xóa 1 kí tự trong xâu 
void xoa(char s[] , int vitrixoa){
    int n=strlen(s);
    for(int i=vitrixoa+1;i<n;i++){
        s[i-1]=s[i];
    }
    s[strlen(s)-1]='\0';
}
 
int main(){

	int t; 
    scanf("%d",&t);
	getchar();
	while(t--){
		char  s[100];
		gets(s);
		char s1[100] ;
        strncpy(s1,s+6,6);
        xoa(s1,3);
        s1[6]='\0';
		if(check1(s1)==1 || check2(s1)==1 || check3(s1)==1 || check4(s1)==1)
			printf("YES\n");
		else printf("NO\n");

	}
	return 0;
}