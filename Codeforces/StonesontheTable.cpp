// http://codeforces.com/problemset/problem/266/A
#include<bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin>>n;
  string s;
  cin>>s;
  int con=0;
  for (int i=1; i<n; i++) {
    if(s[i] == s[i-1]){
      con++;
    }
  }
  cout<<con<<endl;
  return 0;
}
