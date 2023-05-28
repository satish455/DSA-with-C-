#include<bits/stdc++.h>
using namespace std;
int pow1(int n){
    
 if(n==1)
 return 2;

  int ans=2*pow1(n-1);
  return ans;

}
int main(){
    int n;
    cin>>n;

    cout<<pow1(n);
}
