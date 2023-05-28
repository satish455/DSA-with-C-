// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int curr_sum=0;
//     int max_sum=0;
//     for(int i=0;i<n;i++){
//         curr_sum=curr_sum+arr[i];
//         if(curr_sum>max_sum){
//             max_sum=curr_sum;
//         }
//         if(curr_sum<0){
//             curr_sum=0;
//         }
//     }
//     cout<<max_sum<<endl;

// }



#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int curr_sum=0;
    int max_sum=arr[0];
    for(int i=0;i<n;i++){
        curr_sum=curr_sum+arr[i];
        max_sum= max (max_sum,curr_sum);
        if(curr_sum<0){
        curr_sum=0;
    }

    }
    

    cout<<max_sum<<endl;
}