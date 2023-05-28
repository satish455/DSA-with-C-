#include<bits/stdc++.h>
using namespace std;
void subs(string input,string ans,int idx){

if(idx==input.size()){
    cout<<ans<<" ";
    return;
}

    char ch=input[idx];
   subs(input,ans,idx+1);
   subs(input,ans+ch,idx+1);
}
int main(){
  string input;
  cin>>input;

  subs(input," ",0);

}