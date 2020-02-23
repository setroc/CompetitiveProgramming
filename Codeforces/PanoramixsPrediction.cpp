// https://codeforces.com/problemset/problem/80/A
#include<bits/stdc++.h>
using namespace std;
int main() {
  int n1,n2,i=0;
  array<int, 15> fac {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
  cin>>n1>>n2;
  while(fac[i] != n1){
    i++;
  }
  if(fac[i+1] == n2){
    cout<<"YES"<<endl;
  }else{
    cout<<"NO"<<endl;
  }
  return 0;
}
