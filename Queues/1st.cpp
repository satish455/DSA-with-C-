// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     queue<int>q;
//     q.push(1);
//     q.push(23);
//     q.push(34);
//     q.pop();
//     cout<<q.size()<<endl;
//     cout<<"Size of ques is:"<< q.size()<<endl;
//     cout<<q.front()<<endl;

// }



#include<bits/stdc++.h>
using namespace std;
void print(queue<int>&q){
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
}
void reverse(queue < int > & q) {
    stack<int>s;
    while(!q.empty()){
        s.push(q.front());
        q.pop();
    }
    while(!s.empty()){
        q.push(s.top());
        s.pop();
    }
   
}
int main(){
    int t;
    cin>>t;
    while(t--){

        
    int n;
    cin>>n;
    int arr[n];
    queue<int>ans;
    for(int i=0;i<n;i++){
        cin>>arr[i];
         ans.push(arr[i]);
    }
   
   
       
        reverse(ans);
        print(ans);
        

    }

}