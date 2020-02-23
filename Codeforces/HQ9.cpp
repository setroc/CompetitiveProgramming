// http://codeforces.com/problemset/problem/133/A
#include<bits/stdc++.h>
using namespace std;
int main() {
  string s;
  cin>>s;
  int aux = 0;
  for (auto i = 0; i < s.size(); i++) {
    if(s[i] == 'H' or s[i] == 'Q' or s[i] == '9'){
      aux = 1;
    }
  }
  if(aux == 1){
    cout<<"YES"<<endl;
  }else{
    cout<<"NO"<<endl;
  }
  return 0;
}
