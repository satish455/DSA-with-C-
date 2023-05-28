#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    set<char>ans;
    for(int i=0;i<s.size();i++){
        ans.insert(s[i]);
    }
    for(auto i:ans){
        cout<<ans;
    }
}