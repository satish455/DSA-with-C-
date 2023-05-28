#include<bits/stdc++.h>
using namespace std;
int main(){
    int a=10;
    int b=20;
    int *p1=&a;
    int *p2=&b;
    
   
    *p1=*p1+*p2;
    *p2=*p1-*p2;
    *p1=*p1-*p2;

    cout<<*p1<<endl<<*p2<<endl;
    
    
}