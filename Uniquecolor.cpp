#include<bits/stdc++.h>
using namespace std;
int main(){
   int workinghour;
   cin>>workinghour;

   if(workinghour<=40){
    cout<<"no bonus"<<endl;
   }
   if(workinghour>40){
      workinghour=workinghour-40;
      cout<<workinghour*10<<endl;
   }
}