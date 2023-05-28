// #include<bits/stdc++.h>
// using namespace std;
// class rect{
//     int x;
//     int y;
//     public:
//     rect(int a,int b){
//         x=a;
//         y=b;

//     }
//     int area(){
//         return x*y;

//     }

// };
// int main(){
//     rect omg(3,4);
//     cout<<omg.area()<<endl;


// }


#include<bits/stdc++.h>
using namespace std;
class area{
    int first;
    int second;
    public:
    void show(int a,int b){
        first=a;
        second=b;
      cout<<first*second<<endl;
    }


};
int main(){
   area obj;
   obj.show(3,5);

}

