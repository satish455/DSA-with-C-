// #include<bits/stdc++.h>
// using namespace std;
// void change(int data);
// int main(){
//     int d=3;
//     change(3);
//     cout<<d<<endl;
// }

// void change(int data){
//     data=5;
// }



// original value can not change in pass by value function

// original value can change in pass by refrence

#include<bits/stdc++.h>
using namespace std;

int swap(int *a,int*b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int a=3;
    int b=5;


// storage class is used to give the lifetime access of variable;

 



    swap(&a,&b);

    cout<<a<<endl;
    cout<<b;

}