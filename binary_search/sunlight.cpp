#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    int t;
    cin>>t;
    while(t--){
      int n;
      cin>>n;
      int arr[n];
      int curr_max=-1;
      int ans=0;
      for(int i=0;i<n;i++){
        cin>>arr[i];
      }
       for(int i=0;i<n;i++){
         if(arr[i]>curr_max){
           curr_max=arr[i];
           ans++;
         }
        
        
      }
      cout<<ans<<endl;
    }
    
    
    return 0;
  }