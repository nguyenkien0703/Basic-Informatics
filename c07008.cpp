/*
Cho hai đa thức có bậc không quá 10000 (chỉ viết ra các phần tử có hệ số khác 0). Hãy tính tổng hai đa thức đó.

Input: Dòng đầu ghi số bộ test. Mỗi bộ test có hai dòng, mỗi dòng ghi một đa thức theo mẫu như trong ví dụ. Chú ý: Bậc của các hạng tử luôn theo thứ tự giảm dần, trong đa thức chỉ có phép cộng và luôn được viết đầy đủ hệ số + số mũ (kể cả mũ 0).

Output: Ghi ra một dòng đa thức tổng tính được (theo mẫu như ví dụ)
Input

Output

1

3*x^8 + 7*x^2 + 4*x^0

11*x^6 + 9*x^2 + 2*x^1 + 3*x^0

 
-->
3*x^8 + 11*x^6 + 16*x^2 + 2*x^1 + 7*x^0
*/
/*
hướng làm : là tạo 1 cải màng để lưu số mũ của từng số hạng 

*/
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

#define ll long long
int dt[10001], cnt=0;

void solve(char c[]){
    for(int i=0;i<strlen(c);i++){
        if(isdigit(c[i])){
            int tmp=0;//để lất ra hệ số của số mũ 
            while(c[i]!='*'){
                tmp=tmp*10+c[i]-'0';++i;

            }
            //sau caí vòng while này thì nó đã lấy hết ra dc hệ só của số mũ 
            // bây h ó gặp các kí tự *x^ , nên cho i nhảy lên 3 để pass 3 thằng này và mucj đích là để nó nhảy đến chỉ số của cái bậc mũ của x 
            i+=3;
            //nó đã đến dc chỗ bắt đầu của bậc mũ rồi 
            int mu=0;//để lấy ra bậ mũ 
            while(isdigit(c[i])){
                //vì sau mỗi ptu sẽ là dâu " + " nên là ban đầu định để là c[i]!=' ', nhưn rất tiếc 
                //sau ptu cuối cùng thì lại đ có cách nên ngộ nhận , làm như này mới đúng 
                mu=mu*10+c[i]-'0';++i;
            }
            //ddeens  đaây thì nó đã có hệ số và số mũ của 1 ptu ,
            //thì ta sẽ lưu lại cái này vào mảng dt , ví dụ như là mũ 5 có hệ số là 4 thì lưu lại là dt[5]=4
            // lưu ý đây là đg làm với 1 ptu . ví duj như 8*x^7
            dt[mu]+=tmp;//ở đây là += chứ k phải là = vì tí nữa mình sez truyền hàm này cho hai mảng c1 và c2 để nó tính toàn mà 
            // thì hai manghr mà có cùng số mũ thì nó phải cộng dồn  hệ số chứ sao 
        }
    }
}


int main(){
    int t;
    scanf("%d",&t);
    getchar();
    while(t--){
        char c1[10000],c2[10000];
        gets(c1);
        gets(c2);
        memset(dt,0,sizeof(dt));
        solve(c1);solve(c2);
        cnt =0;

        //  ta sẽ kiếm tra xem cái kết quả đã tính xong  chỗ gọi hàm solve kia thì kết quả chuẩn bj in ra thì nó có bao nhiêu ptu 
        for(int i=10000;i>=0;i--){
            //nếu hệ số của số mũ khác không thì tăng cnt lên
            if(dt[i]!=0){
                ++cnt;
            }
        }
        for(int i=10000;i>=0;i--){
            if(dt[i]!=0){

                printf("%d*x^%d",dt[i],i);
                --cnt;
                if(cnt!=0){//nếu chưa phỉa ptu cuối cùng thì in ra " + " 
                    printf(" + ");
                }
            }
        }
        printf("\n");
    }




}



