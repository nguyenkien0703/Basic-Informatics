/*
Hoán vị 2 đường chéo của ma trận vuông
Thực hiện hoán vị 2 đường chéo của ma trận
Input
Dòng đầu tiên là n : Cấp của ma trận . 1≤n≤100.
N dòng tiếp theo, mỗi dòng có n số nguyên.
Output
In ra ma trận sau khi hoán vị 2 đường chéo
Input Output
3
1 2 3
4 5 6
7 8 9

3 2 1
4 5 6
9 8 7
vì là ma trận cấp n nên trên dường chéo thì sẽ có n ptu
trên đường chéo chình thì các phần tử là a[i][i]
trên đường chéo phụ thì các phần tử là a[i][n-i-1]
*/




#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
   int n;
   scanf("%d",&n);
   int a[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0; i<n; i++){
        int tmp=a[i][i];
        a[i][i]=a[i][n-i-1];
        a[i][n-i-1]=tmp;
        
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }




}   