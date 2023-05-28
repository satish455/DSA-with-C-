#include<bits/stdc++.h>
using namespace std;
class employee{
    public:
    int id;
    int sall;
    string name;
    public:
    employee(int id,int sall,string name){
        this->id=id;
        this->sall=sall;
        this->name=name;

    }
    public:
    void show(){
        cout<<id<<"= id "<<sall<<"= sall"<<"= name"<<name;
    }


};
int main(){
    employee obj(1,2,"satigg");
   obj.show();

}