#include<bits/stdc++.h>
using namespace std;

int numway(int n){

    if(n==0){
        return 1;    
    }
    if(n<0){
        return 0;
    }

    int ans=numway(n-1)+numway(n-2)+numway(n-3);
    return ans;
}
int main(){
    int n;
    cin>>n;
    cout<<numway(n)<<endl;

}