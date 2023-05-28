#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int l=0;
    int r=s.size()-1;
    int no_of_operation=0;
    while(l<=r){
        no_of_operation+=abs(s[l]-s[r]);
        l++;
        r--;

    }
    cout<<no_of_operation<<endl;
}