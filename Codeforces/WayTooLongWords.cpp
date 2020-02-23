// http://codeforces.com/problemset/problem/339/A
#include<bits/stdc++.h>
using namespace std;
int main() {
  string s="";
  int n=0;
  cin>>n;
  while(n--){
    cin>>s;
    if(s.size()>10){
      string aux="";

      aux = aux + s[0];

      aux = aux + to_string(s.size()-2);

      aux = aux + s[s.size()-1];
      cout<<aux<<endl;
    }else{
      cout<<s<<endl;
    }

  }
  return 0;
}
