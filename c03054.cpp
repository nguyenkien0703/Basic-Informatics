

#include<stdio.h>
#include<math.h>
#include<ctype.h>
#include<string.h>
#include<math.h>

#define ll long long 
//có nghĩa là trong số đó phải có it nhất 1 chữ số 1 thì nó ms là số hượp lệ 

void solve(char c[]){
	int ok=0;//để check xm có kí tự 1 hay k 
	for(int i=0;i<strlen(c);i++) {
		if(c[i]=='1') ok=1;
		else if(!(c[i]=='0'||c[i]=='8'||c[i]=='9')){//nó duyệt từ đầu đến cuốin mà gặp 4 kí tự này or cac kí tự khác mà đ có chữ số 1 thì đ thỏa mãn 
			ok=0;
			break;
		
		}
	
	}
	if(!ok){
		printf("INVALID");
        return;
	}
	ok  =0;//kiểu như lkà biến đánh dáu ấy , kiểu như nó gặp th 1 r thì ok tao gạp th 1 rồi va nó chuyển ok =1, và in ra hét tất các th đằng sau nó sau khi đã chia đôi 
	for(int i=0;i<strlen(c);i++){
		if(c[i]=='1'){
			printf("1");
			ok=1;
			//cos nghĩ là từ bây h trở đi  , các thằng sau thảng f1 đã có full ok ==1 r 
            //vì nếu k cắt dc thì nó chỉ dc in ra invalid thôi ,, for chỗ này là giành cho in ra kết quả bát buốc phải gặp có kí tưẹ  1
		}else if(ok ==1){
			printf("0");
		}

	}
}
int main(){
	
	int t ;scanf("%d",&t) ;
    getchar();
	while(t--){
        char c[20];
		gets(c);
		solve(c);
        printf("\n");
	}
	return 0;

}