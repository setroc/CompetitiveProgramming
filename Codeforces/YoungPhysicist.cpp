//  http://codeforces.com/problemset/problem/69/A

#include<bits/stdc++.h>
using namespace std;

int main(){
  int n=0,var=0;
  int x=0,y=0,z=0;
  cin>>n;
  while (n--) {
    cin>>var;
    x+=var;
    cin>>var;
    y+=var;
    cin>>var;
    z+=var;
  }
  if(x == 0 and y == 0 and z == 0){
    cout<<"YES"<<endl;
  }else{
    cout<<"NO"<<endl;
  }
  return 0;
}
