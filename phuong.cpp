#include<bits/stdc++.h>
using namespace std;

int main() {
  int cnt=0;
  for(int i=0;i<=127;i++){
    cnt++;
    cout<<(char)(i);
    if(cnt==16){
      cout<<endl;
      cnt=0;
    }
  }

}