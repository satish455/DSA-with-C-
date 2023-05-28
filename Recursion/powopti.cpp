#include<bits/stdc++.h>
using namespace std;
int pow1(int n){

if(n==0)
return 1;

 if(n==1)
 return 2;

  int halfpow=pow1(n/2);
  int ans=halfpow*halfpow;

   if(n%2!=0)
    ans=ans*2;
   
   return ans;
  

}
int main(){
    int n;
    cin>>n;

 
    cout<<pow1(n);
 
  
}
