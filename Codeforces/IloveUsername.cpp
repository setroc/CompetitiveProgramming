// http://codeforces.com/problemset/problem/155/A
#include<bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin>>n;
  vector<int> v;

  while(n--){
    int aux;
    cin>>aux;
    v.push_back(aux);
  }
  int max = v[0], min = v[0], part=0;
  for (auto i = 0; i < v.size(); i++) {
    if(v[i]>max){
      max = v[i];
      part++;
    }
    if(v[i]<min){
      min = v[i];
      part++;
    }
  }
  cout<<part<<endl;
  return 0;
}
