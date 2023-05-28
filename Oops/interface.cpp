#include<bits/stdc++.h>
using namespace std;

class gfg
{
    public:
    virtual string returnstring()=0;
 


};


class child:public gfg{

    public:
    string returnstring(){
        return "Satish_kumar _tivari";
    }

};
int main(){
    child obj;
    cout<<obj.returnstring();


}