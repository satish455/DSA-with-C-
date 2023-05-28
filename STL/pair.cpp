#include<bits/stdc++.h>
using namespace std;


int main(){

pair<int,int>ex;
ex.first=2;
ex.second=4;
cout<<ex.first<<endl;
cout<<ex.second<<endl;

pair<int,pair<int,int>>ex1={1,{2,3}};
cout<<ex1.first<<endl;
cout<<ex1.second.first<<endl;
cout<<ex1.second.second<<endl;

pair<int,int>arr[]={{1,2},{3,4},{5,6}};
cout<<arr[1].first<<endl;
cout<<arr[2].second;

}



