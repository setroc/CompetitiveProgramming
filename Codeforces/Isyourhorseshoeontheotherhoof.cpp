// http://codeforces.com/problemset/problem/228/A
#include<bits/stdc++.h>
using namespace std;
int main() {
  array<int,4> s;
  for (auto i = 0; i < 4; i++) {
    int aux;
    cin>>aux;
    s[i] = aux;
  }
  sort(s.begin(),s.end());
  int o = 0;
  for (auto i = 1; i < 4; ++i) {
    if(s[i-1] == s[i]){
      o++;
    }
  }
  cout<<o<<endl;
  return 0;
}
