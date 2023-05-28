// void pointer is a tupe of pointer which holds the address of any data type




#include<bits/stdc++.h>

using namespace std;
int main(){
    void *ptr;
    int a=6;
    ptr=&a;
    ptr=ptr+22;
    cout<<&a<<endl;
    cout<<ptr<<endl;

}