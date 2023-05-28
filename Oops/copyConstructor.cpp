#include<bits/stdc++.h>
using namespace std;
class hero{
    private:
    int id;

    public:
    void init(int x){
        id=x;
    }
    
    void display(){
      cout<<"id = "<<id<<endl;
    }

};
int main(){
    hero obj;
    obj.init(12);
    obj.display();

    hero obj2(obj);
    obj2.display();



}