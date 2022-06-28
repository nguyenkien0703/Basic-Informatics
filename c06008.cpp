#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
/*dùng mảng đánh dấu , đầu tiên đánh dấu cho full các từ là0
sau đó so sánh từ hiện tại và cacc từ sau đó , nếu có giống nhau thì chuyển mark tại đó thành 1 

*/
#define ll long long
int main(){

    char c[200];
    gets(c);
    char *token = strtok(c," ");
    char a[20][50];
    int n=0;    
    while(token !=NULL){
        strcpy(a[n],token);
        n++;
        token=strtok(NULL," ");
    }

    int b[100]={0};
    for(int i=0;i<n;i++){
        if(b[i]==0){
            for(int j=i+1;j<n;j++){
                if(strcmp(a[i],a[j])==0){
                    b[j]=1;
                }
            }
        }
    }
    for(int i=0;i<n;i++){
        if(b[i]==0){
            printf("%s",a[i]);
            if(i!=n-1){
                printf(" ");
            }
        }
    }
    
}
