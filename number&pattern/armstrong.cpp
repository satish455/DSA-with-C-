#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int org=n;
    int sum=0;
    while(n!=0){
        int res=n%10;
        int ans=res*res*res;
        sum=sum+ans;
        n=n/10;

    }

    if(sum==org){
        cout<<"Yes Armstrong Number "<<endl;
    }
    else{
        cout<<"Not Armstrong"<<endl;
    }
}