// https://codeforces.com/problemset/problem/144/A
#include<bits/stdc++.h>
using namespace std;
int main() {
  int n,x=0;
  cin>>n;
  vector<int> a {};
  while(n--){
    cin>>x;
    a.push_back(x);
  }

  int max=a[0], min=a[0], j=0, k=0;
  for (int i = 0; i < a.size(); i++) {
    if(a[i]<=min){
      min = a[i];
      j = i;
    }
    if(a[i]>max){
      max = a[i];
      k = i;
    }
  }
  j++;
  k++;
  int seconds=0;
  if(j<k){
    seconds = a.size()-j + k -2;
  }else{
    seconds = a.size()-j + k -1;
  }
  cout<<seconds<<endl;
  //cout<<"min = "<<min<<" j = "<<j<<" max = "<<max<<" k = "<<k<<endl;
  return 0;
}
