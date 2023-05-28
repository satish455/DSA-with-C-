#include<bits/stdc++.h>
using namespace std;
bool elementfound(int arr[][4],int target,int n,int m){
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            if(arr[i][j]==target)
            return 1;

        }
    }
    return 0;


}


void print_sum(int arr[][4],int n,int m){
    for(int i=0;i<3;i++){
        int sum=0;
        for(int j=0;j<3;j++){
           sum=sum+arr[i][j];

        }
        cout<<sum<<" ";
    }
    cout<<endl;
    


}


int main(){
    // int rows,column;
    // cin>>rows>>column;


    // column wise input 



    // int arr[3][4];
    // for(int i=0;i<4;i++){
    //     for(int j=0;j<3;j++){   
    //         cin>>arr[j][i];

    //     }
    // }
    //  for(int i=0;i<3;i++){
    //     for(int j=0;j<4;j++){
    //         cout<<arr[i][j]<<" ";

    //     }
    //     cout<<endl;
    // }
    // // rowmul(arr[rows],rows,column);




    // int n,m;
    // cin>>n>>m;
    int arr[3][4];
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }


//   function call for multiply the number

    int target;
    cout<<"enter element to search"<<endl;
    cin>>target;
    
    if(elementfound(arr,target,3,4)){
           cout<<"element is found "<<endl;
    }

    else{
        cout<<"element is not found"<<endl;
    }


    print_sum(arr,3,4);
}