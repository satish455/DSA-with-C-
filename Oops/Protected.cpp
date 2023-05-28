#include<bits/stdc++.h>
using namespace std;
class parent{
    protected:
    int age;


};
class child:public parent{
    public:
    void showParent(int a){
        a=age;
        
    }

    void display(){
        cout<<"This Is Parent Age "<<age<<endl;
    }


};
int main(){
    child obj;
    obj.showParent(66666);
    obj.display();

    

}