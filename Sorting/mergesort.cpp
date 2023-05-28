#include<bits/stdc++.h>
using namespace std;

void merge(int *arr,int s,int e){
    int mid=s+(e-s)/2;
    
    int len1=mid-s+1;
    int len2=e-mid;

   int *arr1=new int[len1];
   int *arr2= new int[len2];

   int mainarrayindex=s;
   for(int i=0;i<len1;i++){
    arr1[i]=arr[mainarrayindex++];
   }

    mainarrayindex=mid+1;
   for(int i=0;i<len2;i++){
    arr2[i]=arr[mainarrayindex++];

   }


   int index1=0;
   int index2=0;
   mainarrayindex=s;

   while(index1<len1 && index2<len2){
    if(arr1[index1]<arr2[index2]){
        arr[mainarrayindex++]=arr1[index1++]; 
        
    }
    else{
        arr[mainarrayindex++]=arr2[index2++];

    }

   }

   while(index1<len1){
     arr[mainarrayindex++]=arr1[index1++];

   }
   while(index2<len2){
    arr[mainarrayindex++]=arr2[index2++];
   }




}


void merge_sort(int arr[],int s,int e){
    if(s>=e){
        return;
    }
    int mid=s+(e-s)/2;
    
    merge_sort(arr,s,mid);

//    right part
    merge_sort(arr,mid+1,e);

    merge(arr,s,e);

}



int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    merge_sort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}