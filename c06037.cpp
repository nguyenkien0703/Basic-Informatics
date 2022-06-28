
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
/*ABCCABDDEEFFGGHHIIJJKKLLMMNNOOPPQQRRSSTTUUVVWWXXYYZZ
mảng a là để lấy ra mã asccill của thằng A, B đầu tiền
mảng b  là lấy ra mã ascill của thằng A, B phía sau  
*/
#define ll long long
int main(){
	int a[127]={0},b[127]={0},check[127]={0};
	char s[1000];
	scanf("%s",s);
	int i,j;
	//mảng cechk như là 1 csai mảng đánh dấu vậy 
	/*
đoạn for dưới đây có nghĩa là , khi mình gặp 1 kí tự nào đó 
thì mình kiếm tra xem nó đã xuất hiện đằng trc chưa bằng việc check xem có == 0 khong , 
nếu ===0 cónghĩa là nó chưa appear đằng trc thì a thêm nó vào mảng a là những thằng mà bâh h mới gặp ,  
va đánh dauá cho nó là 1 
còn nếu check!=0 có nghĩa là thằng này đa dc đánh dấu trc đó rồi , thì bh ta thêm nó vào mảng b 

	*/
	for (i=0;i<strlen(s);i++){
		if(check[s[i]]==0) {
			a[s[i]]=i;
			check[s[i]]=1;
		}

		else b[s[i]]=i;
	}
    
	int count=0;
	for (i=65;i<=90;i++)
	{
		for (j=65;j<=90;j++)
			if(a[i]<a[j] && a[j]<b[i] && b[j]>b[i]) count++;
	}
	printf("%d\n",count);
	return 0;
}  