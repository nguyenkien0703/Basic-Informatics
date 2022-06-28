
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

#define ll long long

int main(){
	int t ;
    scanf("%d",&t);
    for(int z=1;z<=t;z++){
        int n,m;
        scanf("%d%d",&n,&m);
        int a[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                scanf("%d",&a[i][j]);
            }
        }
        printf("Test %d:\n",z);

        for(int i=1;i<n;i++){
            for(int j=1;j<m;j++){
                printf("%d ",a[i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}



