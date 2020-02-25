// http://codeforces.com/problemset/problem/231/A
#include<bits/stdc++.h>
using namespace std;
int main() {
  int n;
  int petya,vasya,tonya;
  int cont=0;
  cin>>n;
  for (auto i = 0; i < n; i++) {
    cin>>petya>>vasya>>tonya;
    if(petya+vasya+tonya >=2){
      cont++;
    }
  }
  cout<<cont<<endl;
  return 0;
}
