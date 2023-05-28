#include<bits/stdc++.h>
using namespace std;
int main(){
    // int n;
    // cin>>n;
    int arr[6]={11,145,156,172,293,758};
    // for(int i=0; i<6;i++){
    //     cin>>arr[i];
    // }
    int hash[10];
    for(int i=0;i<10;i++){
        hash[i]=-1;
    }
    for(int i=0;i<6;i++){
        hash[arr[i]%10]==arr[i];

    }
    for(int i=0;i<10;i++){
        if(hash[i]!=-1){
            cout<<"element present at index slot"<<i<<hash[i]<<endl;
        }
    }
    if(hash[300%10]==-1)
    cout<<"false"<<endl;
    else
    cout<<"true"<<endl;
}