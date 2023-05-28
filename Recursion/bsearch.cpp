
#include<bits/stdc++.h>
using namespace std;
int bsearch(int arr[],int n,int low,int high,int target){
 int mid=(low+high)/2;

 if(arr[mid]==target){
    return mid;
 }
 if(arr[mid]<target){
   bsearch(arr,n,mid+1,high,target);
 }
 else{
    bsearch(arr,n,low,mid-1,target);
 }

}
int main(){
    int arr[6]={1,3,5,7,8,9};
    cout<<bsearch(arr,6,0,6,5);

}