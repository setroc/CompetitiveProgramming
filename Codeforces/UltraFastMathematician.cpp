// https://codeforces.com/problemset/problem/59/A
#include<bits/stdc++.h>
using namespace std;
int main() {
  string n1, n2,n3="";
  cin>>n1>>n2;
  for (int i = 0; i < n1.size(); i++) {
      if(n1[i] == n2[i]){
        n3+= '0';
      }else if(n1[i] != n2[i]){
        n3+= '1';
      }
  }
  cout<<n3<<endl;
  return 0;
}
