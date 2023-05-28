#include<bits/stdc++.h>
using namespace std;
int fab(int n){
    if(n<=1){
        return n;
    }

    return fab(n-1)+fab(n-2);

}

bool check(int n){
    if(n<2){
        return false;

    }

    for(int i=2;i<=n/2;i++){
        if(n%i==0){
       
        return false;

        }
    }
    return true;
}
int main(){

    int input;
    cin>>input;

    int sum =0;
    int fabnumber=fab(input);
    cout<<fabnumber<<endl;

    for(int i=2;i<=fabnumber;i++){
       if(check(i)){
        
        sum=sum+i;
         cout<<i<<endl;
       }
    }
    cout<<sum<<endl;

}