#include<bits/stdc++.h>
using namespace std;

int  spiral(int arr[][4],int n){
    int strow=0;
    int endrow=n-1;
    int stcol=0;
    int endcol=n-1;
    while(strow<=endrow&&stcol<=endcol){
        for(int i=stcol;i<=endcol;i++){
            cout<<arr[strow][i];
        }
        strow++;

       for(int i=strow;i<=endrow;i++){
        cout<<arr[i][endcol];
       }
       endcol--;

        for(int i=endcol;i>=stcol;i--){
            cout<<arr[endrow][i]<<" ";
        }
        endrow--;
        for(int i=endrow;i>=strow;i--){
            cout<<arr[i][stcol]<<" ";
        }
        stcol++;
    }
}
int main(){
    int n=4;
    int arr[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{2,5,6,7}};
    spiral(arr,4);

    
}