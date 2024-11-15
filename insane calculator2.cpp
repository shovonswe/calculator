#include<bits/stdc++.h>
using namespace std;
int main(){
  int a,b;cin>>a>>b;
  int c,d,result;

  c=a&b;
  d=a|b;
  result=c^d;

  cout<<result<<endl;

  return 0;

}
