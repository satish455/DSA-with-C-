#include<bits/stdc++.h>
using namespace std;
int kad(int arr[],int n){
    int curr_sum=0;
    int maxsum=INT_MIN;
    
    int currele=0;
     
    int maxele=INT_MIN;
    bool allnegative=false;
    for(int i=0;i<n;i++){
       currele=arr[i];
       if(currele>0){
         allnegative=true;

       }
       maxele=max(maxele,currele);
       
       curr_sum+=currele;
       
       if(curr_sum<0){
        curr_sum=0;
       }
       maxsum=max(curr_sum,maxsum);

    }
    
    if(allnegative==false){
        return maxele;
    }
    return maxsum;
}
int main(){

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<kad(arr,n);

}