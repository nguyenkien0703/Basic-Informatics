/*

TÌM TỪ THUẬN NGHỊCH DÀI NHẤT

Bài làm tốt nhất
Cho một văn bản. Hãy tìm ra từ thỏa mãn tính chất thuận nghịch có độ dài lớn nhất trong và cho biết từ đó xuất hiện bao nhiêu lần. Nếu có nhiều từ cùng có độ dài lớn nhất thì in ra tất cả các từ đó theo thứ tự xuất hiện.


Input: Văn bản không quá 1000 từ.

Output:

Ghi ra trên một dòng từ thuận nghịch có độ dài lớn nhất và số lần xuất hiện của nó. Nếu có nhiều từ cùng có độ dài lớn nhất thì các từ được liệt kê theo thứ tự xuất hiện ban đầu.

Input

Output

AAA BAABA HDHDH ACBSD SRGTDH DDDDS
DUAHD AAA AD DA HDHDH AAA AAA AAA AAA
DDDAS HDHDH HDH AAA AAA AAA AAA AAA
AAA AAA AAA
DHKFKH DHDHDD HDHDHD DDDHHH HHHDDD
TDTD
-->
HDHDH 3

*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#define ll long long
#define FOR(i, a, b) for (int i = a; i <= b; i++)

struct word
{
    char val[100];
    int fre;
};
typedef struct word word;
int check(char c[])
{
    int l = 0, r = strlen(c) - 1;
    while (l < r)
    {
        if (c[l] != c[r])
            return 0;
        ++l;
        --r;
    }
    return 1;
}
int find(word a[], int n, char tmp[])
{
    for (int i = 0; i < n; i++)
    {
        if (strcmp(a[i].val, tmp) == 0)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    word a[1000];
    int n = 0;
    char tmp[100];
    while ((scanf("%s", tmp)) != -1)
    {
        if (check(tmp))
        {
            int idx = find(a, n, tmp);
            if (idx == -1)
            {
                strcpy(a[n].val, tmp);
                a[n].fre = 1;
                ++n;
            }
            else
            {
                a[idx].fre++;
            }
        }
    }

    int max_len = 0;
    for (int i = 0; i < n; i++)
    {
        if (max_len < strlen(a[i].val))
            max_len = strlen(a[i].val);
    }
    for (int i = 0; i < n; i++)
    {
        if(strlen(a[i].val)==max_len){
            printf("%s %d\n", a[i].val,a[i].fre);
        }
    }
}