
#include<bits/stdc++.h>
using namespace std;
int firstoc(int arr[],int curridx,int target,int n){
    if(curridx==n){
        return -1;
    }
    if(arr[curridx]==target){
        return curridx;
    }
    firstoc(arr,curridx+1,target,n);

}
int main(){
    int arr[6]={1,2,2,3,3,5};
    cout<<firstoc(arr,0,3,6);

}