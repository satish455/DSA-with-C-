#include<bits/stdc++.h>
using namespace std;
int search(int arr[],int n,int key){
int s=0;
int e=n-1;
int mid=s+(e-s)/2;
while(s<=e){
    if(key==arr[mid]){
    return mid;

}
if(arr[s]<arr[mid]){
    if(key>=arr[s] && key<=arr[mid]){
        e=mid-1;

    }
    else{
        s=mid+1;

    }
}

else{
    if(key>arr[mid] && key<arr[e]){
        s=mid+1;
    }
    else{
        e=mid-1;
    }
}
mid=s+(e-s)/2;

}

return -1;





}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int key;
        cin>>key;

        for(int i=0;i<n;i++){
            cin>>arr[i];

        }

        int index=search(arr,n,key);
        cout<<index<<endl;

    }
}