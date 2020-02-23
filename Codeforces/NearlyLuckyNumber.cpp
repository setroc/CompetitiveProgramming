// http://codeforces.com/problemset/problem/110/A
#include<bits/stdc++.h>
using namespace std;
int main() {
  string x, aux = "YES";
  cin>>x;
  for (int i = 0; i < x.size(); i++) {
    if(x[i] != '4' and x[i] != '7'){
      aux = "NO";
    }
  }
  cout<<aux<<endl;
  return 0;
}
