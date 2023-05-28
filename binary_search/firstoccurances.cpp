// #include<bits/stdc++.h>
// using namespace std;
// int lastoccur(int arr[],int size,int key){
//    int start=0;
//    int end=size-1;
//    int ans=-1;
//    int mid=start+(end-start)/2;

//    while(start<=end){
//     if(arr[mid]==key){
//         ans=mid;
//         end=mid-1;
        
//     }
//     else if(key>arr[mid]){
//         start=mid+1;
//     }
   
//    else{
//       end=mid-1;
//    }
        
//      mid=start+(end-start)/2;
      
//    }
//    return ans;

// }

// int firstoc(int arr[],int size,int key){
//    int start=0;
//    int end=size-1;
//    int ans=-1;
//    int mid=start+(end-start)/2;

//    while(start<=end){
//     if(arr[mid]==key){
//         ans=mid;
//         start=mid+1;
        
//     }
//     else if(key>arr[mid]){
//         start=mid+1;
//     }
   
//    else{
//       end=mid-1;
//    }
        
//      mid=start+(end-start)/2;
      
//    }
//    return ans;
// }

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     int key;
//     cin>>key;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     sort(arr,arr+n);
//     int first=lastoccur(arr,n,key);
//     cout<<first<<endl;
//     int last=firstoc(arr,n,key);
//     cout<<last<<endl;
   
//    int total=last-first+1;
//    cout<<"total ="<<total;
//     return 0;
// }



#include<bits/stdc++.h>
using namespace std;

int firstone(int arr[],int n,int key){
  int s=0;
  int e=n-1;
  int mid=s+(e-s)/2;
  int ans=-1;
  while(s<=e){
    if(arr[mid]==key){
     ans=mid;
     e=mid-1;
     
    
      
    }
    else if(arr[mid]>key){
        e=mid-1;
    }
    else{
      s=mid+1;
    }
     mid=s+(e-s)/2;
  }
  return ans;

}



int lastone(int arr[],int n,int key){
  int s=0;
  int e=n-1;
  int mid=s+(e-s)/2;
  int ans=-1;
  while(s<=e){
    if(arr[mid]==key){
     ans=mid;
     s=mid+1;
     
    
      
    }
    else if(arr[mid]>key){
        e=mid-1;
    }
    else{
      s=mid+1;
    }
     mid=s+(e-s)/2;
  }
  return ans;

}
int main(){
  int n;
  cin>>n;
  int arr[n];
  int key=1;

  for(int i=0;i<n;i++){
    cin>>arr[i];
  }



int index=firstone(arr,n,key);

cout<<"index of occurance of first  element="<<key <<"=="<<index<<endl;

int index2=lastone(arr,n,key);
cout<<"index of occurance of last  element="<<key <<"=="<<index2<<endl;


return 0;
}
