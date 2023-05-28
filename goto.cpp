#include<bits/stdc++.h>
using namespace std;
int main(){
    ineligble:
    cout<<"Not eligble to vote"<<endl;
    
   
   int age;
   cin>>age;

    if(age<18){
        goto ineligble;

    

    }

    else{
        cout<<"eligible";
    }
}