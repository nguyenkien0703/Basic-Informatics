/*

Chuẩn hóa tên 2
Thực hiện chuẩn hóa tên người theo mẫu. Tên người là một xâu có thể không chuẩn.
Input
Dòng đầu tiên là số lượng test case T (1≤T≤100).
T dòng tiếp theo mỗi dòng chứa xâu có không quá 1000 kí tự
Output
In tên người đã được chuẩn hóa trên từng dòng
Input Output
2
NguYEN VAN maNH
nGUYEN thuY LinH

Manh, Nguyen Van
Linh, Nguyen Thuy
*/

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
void  chuanhoa1(char c[]){
    // c[0] = toupper(c[0]);
    for(int i=0;i<strlen(c);i++) {
        c[i]= toupper(c[i]);
    }
}
int main() {
	int t ;
    scanf("%d",&t);
    getchar();
    while(t--){
        char c[1000], a[20][50];
        gets(c);
        int n =0;
        char  *token = strtok(c, " ");
        while(token!=NULL){
            strcpy(a[n],token); ++n;
            token= strtok(NULL," ");
        }
        for(int i=1;i<=n-1;i++){
            chuanhoa(a[i]);
            printf("%s",a[i]);
            if(i!=n-1){
                printf(" ");
            }else{
                printf(", ");
            }
        }
        chuanhoa1(a[0]);
        printf("%s",a[0]);
        printf("\n");
    }
    return 0;
}