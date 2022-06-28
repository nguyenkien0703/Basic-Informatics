


#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int lonnhat(int a, int b){
    return (a>b) ? a: b;
}
int main(){
    int t ;
    scanf("%d",&t);
    for(int z=1;z<=t;z++){
        int n, m;
        scanf("%d%d",&n,&m);
        int a[n][m],b[m][n],ans[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++) scanf("%d",&a[i][j]);
        }
        //XÂY DUQNGJ MA TRẬN CHUYỂN VỊ      
        for(int i=0;i<m;i++){
        	for(int j=0;j<n;j++){
        		b[i][j]=a[j][i];
			}
			
		}
		for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                // xay dung ans[i][j]
                ans[i][j]=0;
                for(int k=0;k<m;k++){
                    ans[i][j]+=a[i][k]*b[k][j];
                }
            }
        }
        printf("Test %d:\n",z);
		for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                printf("%d ",ans[i][j]);
            }
            printf("\n");
        }
    }

}