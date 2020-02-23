// http://codeforces.com/problemset/problem/339/A
#include<bits/stdc++.h>
using namespace std;
int main() {
  string s = "", aux = "";
  cin>>s;
  sort(s.begin(),s.end());
  for (auto i = 0; i < s.size(); i++) {
    if(s[i] == '1' or s[i] == '2' or s[i] == '3'){
      aux.push_back(s[i]);
      aux.push_back('+');
    }
  }
  aux.pop_back();
  cout<<aux<<endl;
  return 0;
}
