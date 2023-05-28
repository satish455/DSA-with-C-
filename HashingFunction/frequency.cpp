#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    

    int freq[n]={0};
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        freq[arr[i]]++;
    }  
    for(int i=0;i<n;i++){
        // if(freq[i]!=0){
            cout<<"frequency of"<<i<<"=="<<freq[i]<<endl;
        
    } 
}