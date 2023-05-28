#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;

    int freq[26]={0};

    for(int i=0;i<s.length();i++){
        freq[s[i]-97]++;
    }
    for(int i=0;i<s.length();i++){
        if(freq[s[i]-97]!=0){
            cout<<s[i]<<freq[s[i]-97];
        }
        freq[s[i]-97]=0;
    }


}