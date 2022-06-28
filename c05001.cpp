
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

#define ll long long

int main(){
	
    int n,m;
    scanf("%d%d",&n,&m);
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int j=0;j<m;j++){
        for(int i=0;i<n;i++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}



