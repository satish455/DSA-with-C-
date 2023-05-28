#include<bits/stdc++.h>
using namespace std;
int main(){
    int num1,num2;
    cin>>num1>>num2;
    int ans=0;
    for(int i=1;i<=num1||i<=num2;i++){
        if(num1%i==0 and num2%i==0){
            ans=i;
        }
    }
    cout<<ans<<endl;
}