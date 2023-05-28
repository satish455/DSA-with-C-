#include<bits/stdc++.h>
using namespace std;
bool isprime(int n){
    if(n<2){
        return false ;

    }
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return false;
        }
        
    }
    return true;
}
int main(){
    int lower;
    cin>>lower;
    int upper;
    cin>>upper;

    
    int sum=0;

    for(int i=lower;i<=upper;i++){
        if(isprime(i)){
           
           cout<<i<<endl;

           sum+=i;
        }
    }
    cout<<sum<<endl;

}