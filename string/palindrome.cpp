#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int i=0;
    int j=s.size()-1;
    int flag=0;
    
    while(i<j){
        if(s[i]!=s[j]){
            cout<<"No"<<endl;
            flag=1;
        }
        i++;
        j--;
    }
    if(flag=0){
        cout<<"yes"<<endl;
    }
}