#include<bits/stdc++.h>
using namespace std;
int main(){
    // int n,m;
    // cin>>n>>m;
    int arrt[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         cin>>arrt[i][j];
    //     }
    // }


    
    int colno=0;
    int n=3;
    
    while(colno<3){
        int rowno=0;
        if(colno%2==0){
           while(rowno<n){
            cout<<arrt[rowno][colno];
            rowno++;
           }
        }
        else{
            int rowno=n-1;
            while(rowno>=0){
                
                cout<<arrt[rowno][colno];
                rowno--;

            }

        }
        colno++;
    }
}