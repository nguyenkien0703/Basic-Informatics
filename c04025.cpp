#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define ll long long 
int cmp1(const void *a, const void *b){
    int *x=(int*)a;
    int *y=(int*)b;
    if(*x<*y) return -1;
    return 1;
}
int main(){


    int n;
    scanf("%intd",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int b[n],c[n],n1=0,n2=0;;
    for(int i=0;i<n;i++){
        if(a[i]%2==0){
            b[n1]=a[i];
            ++n1;
        }else{
            c[n2]=a[i];
            ++n2;
        }
    }
    qsort(b,n1,sizeof(int), cmp1);
    qsort(c,n2,sizeof(int), cmp1);
    for(int i=0;i<n1;i++){
        printf("%d ",b[i]);
    }
    
    for(int i=0;i<n2;i++){
        printf("%d ",c[i]);
    }
    

    



}