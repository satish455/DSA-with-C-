#include<bits/stdc++.h>
using namespace std;
int binarys(int arr[],int n,int key){
  int s=0;
  int e=n-1;
  int mid=s+(e-s)/2;
  while(s<=e){
    if(arr[mid]==key){
      return mid;
    }
    else if(key>arr[mid]){
        s=mid+1;
    }
    else{
      e=mid-1;
    }
     mid=s+(e-s)/2;
  }
  return -1;

}
int main(){
  int n;
  cin>>n;
  int arr[n];
  int key;
  cin>>key;
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }



int index=binarys(arr,n,key);

cout<<"index of element =="<<index<<endl;

return 0;
}































// #include <bits/stdc++.h>
//   using namespace std;
  
//   int bs(int arr[],int size,int key){
//      int s=0;
//      int e=size-1;
//     int mid=s+(e-s)/2;
//     while(s<=e){
//       if(key==arr[mid]){
//         cout<<"Hard"<<endl;
//         break;
//       }
//       if(key>arr[mid]){
//         s=mid+1;
//       }
//      else{
//         e=mid-1;
//      }
//       mid=s+(e-s)/2;
//     }

//    cout<<"Easy"<<endl;
    
    
    
//   }
//   int main()
//   {
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//       cin>>n;
//       int arr[n];
//       for(int i=0;i<n;i++){
//         cin>>arr[i];
//       }
      
      
      
    

//     }
    
      
      
//     }
    
    
   
  