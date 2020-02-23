// http://codeforces.com/problemset/problem/236/A
#include<bits/stdc++.h>
using namespace std;
int main() {
  string s;
  cin>>s;
  sort(s.begin(),s.end());
  int c=0;
  for (auto i = 1; i < s.size(); i++) {
    if(s[i-1] == s[i]){
      c++;
    }
  }
  c = s.size()-c;
  if(c%2==0){
    cout<<"CHAT WITH HER!"<<endl;
  }else{
    cout<<"IGNORE HIM!"<<endl;
  }

  return 0;
}
