#include<bits/stdc++.h>
using namespace std;

string solve (string str,int left,int right){
int n=str.length();
while(left>=0 && right<n){
    if(str[left]!=str[right]){
        break;
        
    }
        left--;
        right++;
   

}
 return str.substr(left+1,right-left-1);



}

string longestP(string s){
    string longest;
   
   for(int i=0;i<s.size();i++){
    string odd=solve(s,i,i);
    if(odd.size()>longest.size())
    {
        longest=odd;
    }
   }
   for(int i=0;i<s.size();i++){
    string even=solve(s,i,i+1);
    if(even.size()>longest.size())
    {
        longest=even;
    }
   }
   return longest;


}
void print(string str){
    for(int i=0;i<str.size();i++){
        cout<<str[i]<<endl;
    }
}


int main(){
int t;
cin>>t;
while(t--){
   string input;
cin>>input;





}


}