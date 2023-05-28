#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int x=abs(n);
    for(int i=1;i<=x;i++){
        if(x%i==0){

            if(i==n)
            cout<<i;
            else
            cout<<i<<",";
        }
        
    }
}
