

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    int n ,m ,p,q;
    scanf("%d%d%d%d",&n,&m,&p,&q);
    int a[n][m],b[m][p], tich1[n][p],d[p][q],ans[n][q];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<p;j++){
            scanf("%d",&b[i][j]);
        }
    }
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            scanf("%d",&d[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int  j=0;j<p;j++){
            //tình toán tich1[i][j]
            tich1[i][j] =0;
            for(int k=0;k<m;k++){
                tich1[i][j] +=a[i][k]*b[k][j];
            }
        }
    }


    for(int i=0;i<n;i++){
        for(int j=0;j<q;j++){
            //tinh toan ans[i][j];
            ans[i][j] =0;
            for(int k=0;k<p;k++){
                ans[i][j] +=tich1[i][k]*d[k][j];
            }
        }
    }
    // in ra ma tran cuoi cung 
    for(int i=0;i<n;i++){
        for(int j=0;j<q;j++){
            printf("%d ",ans[i][j]);
        }
        printf("\n");
    }
}   