
#include <stdio.h>
#include <string.h>
 
int StrToNumArr (char a[], char b[], int A[], int B[]) {
    int lenA = strlen (a);
    int lenB = strlen (b);
   
    int len;
    if (lenA>lenB) len=lenA;
    else len = lenB;
   
    lenA--;
    lenB--;
    for (int i=len-1; i>=0; i--) {
        if (lenA>=0) {
            A[i] = a[lenA]-'0';
            lenA--;
        } else A[i]=0;
       
        if (lenB>=0) {
            B[i] = b[lenB]-'0';
            lenB--;
        } else B[i]=0;
    }
    return len;
}
 

int ss (int A[], int B[], int len) {
    for (int i=0; i<len; i++) {
        if (A[i]>B[i]) return 1;
        else if (A[i]<B[i]) return -1;
    }
    return 0;
}
 
int MiBig (int A[], int B[], int len, int C[], int *dau) {
    int hs=ss (A, B, len);
    if (hs==0) return 0;
    *dau=hs;
    for (int i=len-1; i>=0; i--) {
        int x;
        if (hs==1) x=A[i]-B[i];
        else x=B[i]-A[i];
        if (i!=0) {
            if (x>=0) C[i]=x;
            else {
                C[i]=x+10;
                if (hs==1) B[i-1]=B[i-1]+1;
                else A[i-1]=A[i-1]+1;
            }
        } else {
            C[i]=x;
        }
    }
    for (int i=0; i<len; i++) {
        if (C[i]!=0) return (len-i);
    }
}

int main () {
    int t ;
    scanf("%d",&t);
    while (t--){

        char a[1001] = "";
        char b[1001] = "";
        scanf ("%s%s", a, b);
        int len;
    
    
    
    
        int Am[1003];
        int Bm[1003];
        len = StrToNumArr (a, b, Am, Bm);
        int Mi[1003];
        int dau=1;
        int lenMi = MiBig (Am, Bm, len, Mi, &dau);
        if (lenMi==0) printf ("0");
        else {

            for (int i=len-lenMi; i<len; i++) {
                printf ("%d", Mi[i]);
            }
        }
        printf ("\n");
    }
   
    return 0;
}