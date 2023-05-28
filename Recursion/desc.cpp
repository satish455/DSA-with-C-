// #include<bits/stdc++.h>
// using namespace std;
// void desc(int n){
//     if(n==0)
//     return;
    
//      cout<<n;
//     desc(n-1);
    
    


    
// }
// int main(){
//     int n;
//     cin>>n;

//     desc(n);

// }


#include<bits/stdc++.h>
using namespace std;
void desc(int i,int n){
    if(i==n+1)
    return;
     cout<<i;
    desc(i+1,n);
}
int main(){
    int n;
    cin>>n;
    desc(1,n);

}