
#include<bits/stdc++.h>
using namespace std;
void shift(int arr[],int idx,int n,int target){
 

 if(idx==n-1){
   return;
  }

  if(arr[idx]==target){
	swap(arr[idx],arr[idx+1]);
  }
  shift(arr,idx+1,n,target);



}
int main(){
    int arr[5]={5,3,1,2,9};
	int n=5;
	shift(arr,0,n,5);
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }

}