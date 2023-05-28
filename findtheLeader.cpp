#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
    cin>>n;
    vector<int>arr(n);
    vector<int>ans1;
    

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
     int maxfromright=arr[n-1];
    ans1.push_back(maxfromright);

    for(int i=n-2;i>=0;i=i-1){
        if(maxfromright<arr[i]){
            maxfromright=arr[i];
            ans1.push_back(maxfromright);
        }

    }
    for(int i=0;i<ans1.size();i++){
        cout<<ans1[i]<<" ";
    }


      
    }
    
  
    
   
}