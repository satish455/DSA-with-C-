#include<bits/stdc++.h>
using namespace std;
int fact(int n){
    if(n==0||n==1){
        return n;
    }

int ans=fact(n-1)+fact(n-2);
return ans;


}
int main(){
    int n;
    cin>>n;
    cout<<fact(n);
}