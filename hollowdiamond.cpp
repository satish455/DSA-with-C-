
#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int i,j,k=0;
for( i=1;i<=n;i++){
  i<=5?k++:k--;

   for(j=1;j<=n;j++){

      if(j<=6-k||j>=4+k){
        cout<<"*";
      }
      else{
           cout<<" ";
      }
       
   }
   cout<<endl;
}
}