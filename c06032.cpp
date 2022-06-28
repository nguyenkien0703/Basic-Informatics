/*
Ghép xâu
Cho trước các từ, hãy ghép các từ này thành một xâu sao cho xâu được ghép có thứ tự từ
điển nhỏ nhất
Input
Dòng đầu tiên là số lượng test case T (1≤T≤100).
Mỗi test case gồm 1 dòng gồm số đầu tiên là n - số từ trong test case, theo sau là n từ
Output
In ra xâu ghép có thứ tự từ điển nhỏ nhất
Input Output
2
4 java python c php
5 a b cdef zabc word

cjavaphppython
abcdefwordzabc
*/
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

#define ll long long
int cmp(const void *a, const void *b){
    char x[100],y[100],z[100],t[100];
    strcpy(x,(char*)a); strcpy(z,x);
    strcpy(y,(char*)b); strcpy(t,y);
    strcat(x,y);
    strcat(t,z);
    if(strcmp(x,t)<0) return -1;
    return 1;


}
int main() {

    int t ;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        char a[n][100];
        for(int i=0; i<n; i++){
            scanf("%s", &a[i]);
            
        }
        qsort(a,n,sizeof(a[0]),cmp);
        for(int i=0; i<n; i++){
            printf("%s", a[i]);
        }
        printf("\n");
    }
}