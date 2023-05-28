
#include <bits/stdc++.h>
  using namespace std;
  
  int flor (int arr[],int size,int key){
     int s=0;
     int e=size-1;
    int mid=s+(e-s)/2;
    while(s<=e){
      if(arr[mid]<=key){
        return mid;
        
      }
      if(key>arr[mid]){
        s=mid+1;
      }
     else{
        e=mid-1;
     }
      mid=s+(e-s)/2;
    }

   return -1;
    
    
    
  }
  int main()
  {
    int n;
    cin>>n;
    int arr[n];
    int key;
    cin>>key;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int index=flor(arr,n,key);
    cout<<index<<endl;

  }
    
      
      

    