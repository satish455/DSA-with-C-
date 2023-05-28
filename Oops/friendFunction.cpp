// #include<bits/stdc++.h>
// using namespace std;
// class add{
//     int a;
//     int b;
//     public:
//     add(int x,int y){
//         a=x;
//         b=y;
//     }

    
//     int sum(){
//         cout<<a+b;
//     }

//     friend void show(add);


// };

// void show(add c){
//     cout<<c.a+c.b<<endl;
// }
// int main(){
//     add obj(34,55);
//     cout<<obj.sum();
//     show(obj);

// }


// #include<bits/stdc++.h>
// using namespace std;

// class test{
//     public:
//     int a;
//     int b;
//     public:

//     test(int x,int y){
//         a=x;
//         b=y;
  
//     }

//     int result(){
//         cout<<a+b;
//     }

//     friend void show(test);

// };


// void show(test c){
//     cout<<c.a+c.b<<endl;
// }
// int main(){
//     test obj(4,5);
//     obj.result();
//     show(obj);
    
// }


#include<bits/stdc++.h>
using namespace std;
class test{
    private:
    int a;
    int b;
    public:
     test(int x,int y){
        a=x;
        b=y;
    }

    friend int show(test);

};

int show(test c){
    cout<<c.a+c.b<<endl;

}
int main(){
    test obj(55,33);
    show(obj);

}