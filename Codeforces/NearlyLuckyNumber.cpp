// http://codeforces.com/problemset/problem/110/A
#include<bits/stdc++.h>
using namespace std;
int main() {
  string x, aux = "NO";
  cin>>x;
  int count=0;
  for (int i = 0; i < x.size(); i++) {
    if(x[i] == '4' or x[i] == '7'){
      count++;
    }
  }
  if(count==7 or count== 4){
    aux = "YES";
  }
  cout<<aux<<endl;
  return 0;
}
