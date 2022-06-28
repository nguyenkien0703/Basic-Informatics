
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

#define ll long long
void selectionSort(int a[], int n){
    for(int i=0;i<n-1;i++){
        int min_pos=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[min_pos]){
                min_pos=j;
            }
        }
        int tmp=a[i];
        a[i]=a[min_pos];
        a[min_pos]=tmp;
        for(int i=0; i<n; i++){
            printf("%d ",a[i]);
        }
        printf("\n");

    }
}
int n;
int main(){
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);

    }

    for(int i=0;i<n-1;i++){
        int min_pos=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[min_pos]){
                min_pos=j;
            }
        }
        int tmp=a[i];
        a[i]=a[min_pos];
        a[min_pos]=tmp;
        printf("Buoc %d: ",i+1  );
        for(int i=0; i<n; i++){
            printf("%d ",a[i]);
        }
        printf("\n");

    }

    
}
