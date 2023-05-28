// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int a=10;
//     int b=20;
//     int *p1=&a;
//     int *p2=&b;
    
   
//     *p1=*p1+*p2;
//     *p2=*p1-*p2;
//     *p1=*p1-*p2;

//     cout<<*p1<<endl<<*p2<<endl;


//     // Refrence variable is another name of already existing variable;
    
//     int k=10;
//     int &ans=k;
//     cout<<ans<<endl;
    
// }



#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[6]={1,2,3,4,5,6};
    for(int i=0;i<6;i++){
     cout<<i<<" "<<&arr[i]<<endl;
    }
}