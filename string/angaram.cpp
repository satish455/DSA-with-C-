
#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int n;
    cin>>n;
    int flag=0;

    char arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int m;
    cin>>m;
    char arr2[m];
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }


    int freq2[256]={0};
    int freq1[256]={0};
    
    for(int i=0; i<n && i<m ; i++){
       freq1[arr[i]]++;
       freq2[arr2[i]]++;

    }
    for(int i=0;i<256;i++){
        if(freq1[i]!=freq2[i]){
           flag=1;
        }
    }

    if(flag==0)
    cout<<"Yes"<<endl;
    else
    cout<<"No"<<endl;
  
}