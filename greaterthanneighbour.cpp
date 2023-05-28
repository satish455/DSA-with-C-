// #include<bits/stdc++.h>
// using namespace std;
// void printele(int arr[],int n){
//     int flag=0;
//     for(int i=0;i<n-1;i++){
        
//         if(arr[i]>arr[i-1] && arr[i+1]){
//             cout<<i<<" ";
//             flag=1;
//         }
//         if(arr[i]>arr[i-1]){
//             cout<<i<<" ";
            
//         }
       
//     }
//     cout<<endl;
//     if(flag==0){
//         cout<<"-1"<<endl;
//     }

// }
// int main(){
    
    
//         int n;
//          cin>>n;
//         int arr[n];
       
//         for(int i=0;i<n;i++){
//             cin>>arr[i];
//         }
//         printele(arr,n);
    
// }



#include<bits/stdc++.h>
using namespace std;
void peek(int arr[],int n){
    if (arr[n] == 1)
      cout<<0<<" ";//return the element if there's only one element in the array
    if (arr[0] >= arr[1])
        cout<<0<<" ";
    if (arr[n-1] >= arr[n- 2])
      cout<<n-1;
 
    // find the peak in the remaining array elements
    for(int i = 1; i < n-1; i++)
    {
         //comparing current element with neighbours
        if (arr[i] >= arr[i - 1] &&
            arr[i] >= arr[i + 1])
            cout<<i<<" ";
    }
    // cout<<arr[0];
}


int main(){
    int t;
    cin>>t;
    while(t--){

    int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
   peek(arr,n);
   cout<<endl;
    }
   

   
}




