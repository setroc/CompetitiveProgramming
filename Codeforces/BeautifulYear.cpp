// http://codeforces.com/problemset/problem/266/B
#include<bits/stdc++.h>
using namespace std;
int main() {
  int y;
  cin>>y;
  int a=0,b=0,c=0,d=0;
  while (true) {
    y++;
    a = y/1000;
    b = y/100 %10;
    c = y/10 %10;
    d = y%10;
    if(a!=b and a!=c and a!=d and b!=c and b!=d and c!=d){
      break;
    }
  }
  cout<<y<<endl;
  return 0;
}
