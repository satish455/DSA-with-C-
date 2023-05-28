#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    vector<int>ans;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int curr_ans=0;
    ans.push_back(curr_ans);
    for(int i=1;i<n;i++){
        if(arr[i]>arr[i-1]&&arr[i]<arr[i+1]){
            curr_ans=i;
        }
        ans.push_back(curr_ans);
    }

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }




    return 0;
}