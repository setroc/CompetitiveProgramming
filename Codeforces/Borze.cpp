// http://codeforces.com/problemset/problem/32/B
/*
  0 -> .
  1 -> -.
  2 -> --
*/
#include<bits/stdc++.h>
using namespace std;
int main() {
  string ina,aux = "";
  cin>>ina;
  for(int i=0;i<=ina.size()-1;i++){
    if(ina[i] == '.'){
      aux+= "0";
    }
    if(ina[i] == '-' and ina[i+1] == '.'){
      aux+= "1";
      i++;
    }
    if(ina[i] == '-' and ina[i+1] == '-'){
      aux+= "2";
      i++;
    }
  }
  cout<<aux<<endl;
  return 0;
}
