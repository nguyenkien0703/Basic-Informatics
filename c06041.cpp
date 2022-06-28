#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

int main(){
	char c[100001];
	int cnt[256] = {0};
	scanf("%s", c);
	int pos = 0;
	int n = strlen(c);
	while(pos < n){
        //tim dc ki tu có thứ tự từ đien lớn nhat tinh từ pos-> n-1
		char tmp = c[pos];
		int last_pos = pos;
		for(int i = pos; i < n; i++){
			if(c[i] > tmp){
				tmp = c[i]; 
			}
		}
		for(int i = pos; i < n; i++){
			if(c[i] == tmp){
				printf("%c", c[i]); 
                last_pos = i;//đánh dấu vị trí cuối cùng tính đến thời điểm hiện tại
			}
		}
		pos = last_pos + 1;
	}

}