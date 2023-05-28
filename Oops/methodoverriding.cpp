#include<bits/stdc++.h>
using namespace std;
class base{
    public:
    void print(){
        cout<<"I am the base class function print "<<endl;
    }
    void show(){
        cout<<"this is show function of base class"<<endl;
    }
    


};


class child:public base{
    public:
    void print(){
        cout<<"hello i am child class print is my function "<<endl;
    }


};

int main(){
    // base*ptr;
    // child obj;
 
    // ptr=&obj;
    
   
    // ptr->print();

  base obj1;
  child obj;
  obj.print();
  obj.show();
  

}
 

    
    

