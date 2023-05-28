#include<bits/stdc++.h>
using namespace std;
class parent{
    public:
    int p;

};

class child:public parent{
    public:
    int q;
    public:
    void show(){
        cout<<"hello I am child class of single inheritance example"<<q<<endl<<p<<endl;
    }


};
int main(){
    child obj;
    obj.p=23;
    obj.q=34;
    obj.show();

}