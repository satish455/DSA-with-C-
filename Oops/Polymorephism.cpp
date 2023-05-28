#include<bits/stdc++.h>
using namespace std;

// overloading example and polymorephism
class kg{
    public:
    void display(int a){
        cout<<"this is the value of a="<<a<<endl;
    }
    void display(double a){
        cout<<"this is the value of a in double form="<<a<<endl;
    }
    
    void display(int a,int b){
        cout<<"This is the value of a and b with 2 argument="<<a<<b<<endl;
    }

};
int main(){
  kg obj;
  obj.display(1);
  obj.display(2.34);
  obj.display(4,5);



}