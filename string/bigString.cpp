#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

char Largestchar[100];
int maxlength=INT_MIN;
    for(int i=0;i<n;i++){
        char currentChararray[100];
       cin.getline(currentChararray,100,'.');
       int length=strlen(currentChararray);
       if(length>maxlength){
          maxlength=length;
       }
     
     strcpy(Largestchar,currentChararray);
    }
    cout<<Largestchar<<" ="<<maxlength-1;
}