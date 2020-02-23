// https://codeforces.com/problemset/problem/59/A
#include<bits/stdc++.h>
using namespace std;
int main() {
  string a;
  cin>>a;
  int low =0, cap = 0;
  for(int i=0;i<a.size();i++){
    if(isupper(a[i])){
      cap++;
    }else{
      low++;
    }
  }
  if(cap>low){
    for (size_t i = 0; i < a.size(); i++) {
      a[i] = toupper(a[i]);
    }
  }else if(low>=cap){
    for (size_t i = 0; i < a.size(); i++) {
      a[i] = tolower(a[i]);
    }
  }
  cout<<a<<endl;
  return 0;
}
