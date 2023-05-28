#include<bits/stdc++.h>
using namespace std;
int arrsum(int arr[],int curridx,int n){

  if(curridx==n)
  return 0;

    int ans=arr[curridx]+arrsum(arr,curridx+1,n);
    return ans;

}
int main(){

    int arr[5]={1,2,3,4,5};
    cout<<arrsum(arr,0,5);

}