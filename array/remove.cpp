#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];

    // string s;
    // cin>>s;
    // sort(s.begin(),s.end());
    
    sort(arr,arr+n);

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<arr[0];
    for(int i=1;i<n;i++){
        
        if(arr[i]!=arr[i-1]){
          cout<<arr[i];
        }
    }

}