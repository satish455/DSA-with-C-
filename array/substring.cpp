#include<bits/stdc++.h>
using namespace std;
int main(){
    char arr[100]="hello";

    int n=strlen(arr);
    for(int st=0;st<n;st++){
        for(int end=st;end<n;end++){
            for(int i=st;i<=end;i++){
                cout<<arr[i];
            }
            cout<<endl;
        }

    }
}