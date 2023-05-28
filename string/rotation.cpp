#include<bits/stdc++.h>
using namespace std;

void rotate(char arr[],int sp){
    int n=strlen(arr);

// shift all the element right by sp places 
    for(int i=n-1;i>=0;i--){
        arr[i+sp]=arr[i];
    }

    n= n=strlen(arr);

    int i=n-sp;
    int j=0;
    while(i<n){
        arr[j]=arr[i];
        i++;
        j++;

    }
    arr[n-sp]='\0';
    cout<<arr;
}
int main(){

    char arr[100]="hello";
    int sp=2;
    rotate(arr,sp);

}