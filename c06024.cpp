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
 
int SumBig (int A[], int B[], int len, int C[]) {
    for (int i=len-1; i>=0; i--) {
        if (i!=0) {
            int x = A[i]+B[i];
            C[i]=x%10;
            B[i-1]=B[i-1]+(x/10);
        } else C[i]=A[i]+B[i];
    }
    return len;
}

 
int main () {
    int t ;
    scanf("%d",&t);
    while (t--) {

        char a[1001] = "";
        char b[1001] = "";
        scanf ("%s%s", a, b);
        int len;
    
    
    
        int As[1003];
        int Bs[1003];
        int Sum[1003];
        len = StrToNumArr (a, b, As, Bs);
        int lenSum = SumBig (As, Bs, len, Sum);
        for (int i=0; i<lenSum; i++) {
            printf ("%d", Sum[i]);
        }
        printf ("\n");
    
    }
    
   
    return 0;
}