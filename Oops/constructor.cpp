#include<bits/stdc++.h>
using namespace std;
class constructor{
    public:
    int a;
    int b;
    constructor(){
        cout<<"This is like default constructor"<<endl;
    }


};
class overoladconstructor{
   
    public:
    overoladconstructor(int x,int y){
         cout<<x<<y<<endl;
    }
    overoladconstructor(int a , int b , int c){
        cout<<a<<b<<c<<endl;
    }
   

};
int main(){
    constructor obj;
    

    overoladconstructor obj2(45,23);
    // overoladconstructor obj2(33,55);





}


