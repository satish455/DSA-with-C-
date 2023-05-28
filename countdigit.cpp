#include <bits/stdc++.h>
using namespace std;
int findnumber(int n){
  if(n==1){
    return 1;
  }
  string s=to_string(n);
  return s.length()+findnumber(n-1);
}

int main()
{
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    cout<<findnumber(n)<<endl;
  }
  
  
  return 0;
}