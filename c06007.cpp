#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
/* kiểu nhhư là vẫn làm tokne như mọibài v , sau đó m so  sánh tuengf cái token vs cái mà đề bắt xáo xem giống nhua k , 
nếu khác nhau thì m cop th đó sang mảng a , còn th giống thì k cop , v là ssu khi kết thúc thì 
tất cr những th còn lại sẽ dc chuyển sang mnagr a , h muốn in ra thì dùng fỏ duyệt mảng a thôi 
*/
#define ll long long

int main(){

    char c[200];
    gets(c);
    char w[10];//để nhập cái từu cần xóa 
    scanf("%s",w);
    char *token = strtok(c," ");
    char a[20][50];
    int n=0;    
    while(token !=NULL){
        if(strcmp(token,w)!=0){//so sánh cai th dc tách ra vs cái th mà đề bảo xóa , nếu khác nhau thì 
            strcpy(a[n],token);
            n++;
        }
        token=strtok(NULL," ");
    }
    for(int i=0;i<n;i++){
        printf("%s",a[i]);
        if(i!=n-1){
            printf(" ");
        }
    }
}
/*
input lap trinh python java python c lap trinh
trinh
output lap python java python c lap

*/