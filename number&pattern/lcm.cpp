#include<bits/stdc++.h>
using namespace std;
int main(){
    int num1,num2;
    cin>>num1>>num2;
    int ans=0;
    for(int i=1;i<=num1*num2;i++){
        if(i%num1==0 and i%num2==0){
           
            ans=i;

            break;
        }
    }
    cout<<ans<<endl;
}