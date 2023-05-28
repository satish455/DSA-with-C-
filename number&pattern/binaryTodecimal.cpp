#include<bits/stdc++.h>
using namespace std;

int main(){

    long long int n;
    cin>>n;

    int i=0;
    int decimal,ans=0;
    while(n!=0){
        decimal=n%10;
        ans=ans+decimal*pow(2,i);
         i++;
         n=n/10;
        
    }
    cout<<ans;
    
}