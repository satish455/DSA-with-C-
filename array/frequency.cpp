
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int ma=0;
    for(int i=0;i<n;i++){
        ma=max(ma,arr[i]);
    }
    int freq[ma+1]={0};

    for(int i=0;i<n;i++){
        freq[arr[i]]++;
    }

    for(int i=0;i<ma+1;i++){
        if(freq[i]!=0){
            cout<<i<<"->"<<freq[i]<<endl;
        }
       

    }



}


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     int freq[n+1]={0};
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     for(int i=0;i<n;i++){
//         freq[arr[i]]++;
//     }

//     for(int i=0;i<n;i++){
//         if(freq[i]!=0){
//             cout<<i<<"="<<freq[i];
//         }
//     }
    
    
// }