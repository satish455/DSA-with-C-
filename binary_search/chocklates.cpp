#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    int n;
    cin>>n;
    int arr[n];
    int count=0;
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    int q;
    cin>>q;
    while(q--){
      for(int x=0;x<n;x++){
        cin>>x;
      }
    }
    for(int i=0;i<n;i++){
      if(arr[i]<=x){
        count++;
      }
      
    }
    cout<<count<<endl;
    
    return 0;
  }