// #include<bits/stdc++.h>
// using namespace std;
// class circle{
//     private:
//     int radious;

//     public:
//     double area(int r){
//         r=radious;
//         return (3.14*r*r);
//     }

// };
// int main(){
//     circle obj;
    
//     cout<<obj.area(12);
    
    


// }


#include<bits/stdc++.h>
using namespace std;
class hero{
    private:
    int age;
    public:
    void checkage(int ag1 ){
        age=ag1;

        cout<<"The heros age is = "<<ag1<<endl;
    }

};
int main(){
   hero obj;
   

   obj.checkage(12);

}