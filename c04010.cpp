
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

#define ll long long

int main(){
	
    int n;
    scanf("%d",&n);
    int a[n];
    if(n>2&&n<100){

        for(int i=0; i<n; i++){
            scanf("%d",&a[i]);
        }
        int min1=1e9,min2=1e9;
        for(int i=0; i<n; i++){
            if(a[i]<min1){
                min2=min1;
                min1=a[i];
            }else if(a[i]>min1&&a[i]!=min2){
                min2=a[i];
            }
        }
        printf("%d %d",min1,min2);
    }

    return 0;
}



