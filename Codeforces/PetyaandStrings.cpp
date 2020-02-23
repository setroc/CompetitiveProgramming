// http://codeforces.com/problemset/problem/112/A
#include<bits/stdc++.h>
using namespace std;
int main() {
  string s1,s2;
  cin>>s1>>s2;
  for (auto i = 0; i < s1.size(); i++) {
    s1[i] = toupper(s1[i]);
    s2[i] = toupper(s2[i]);
  }
  cout<<strcmp(s1.c_str(),s2.c_str())<<endl;
  return 0;
}
