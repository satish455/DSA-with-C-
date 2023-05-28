// #include<bits/stdc++.h>
// using namespace std;
// int insertion_sort(int arr[],int n){
//     for(int i=1;i<n;i++){
//         int temp=arr[i];
 
//          int j=i-1;
//         for(;j>=0;j--){
//           if(arr[j]>temp){
//            arr[j+1]=arr[j];

//           }
//           else{
//             break;
//           }
//         }
//         arr[j+1]=temp;
//     }

// }
// void print(int arr[] , int n){
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     insertion_sort(arr,n);
//     print(arr,n);
// }







#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
    int i,j;
	for(i=1;i<n;i++){
		int pickedup_card=arr[i];
		for(j=i-1;j>=0 && arr[j]>pickedup_card;j--){
				arr[j+1]=arr[j];	
		}
		arr[j+1]=pickedup_card;
	}
	for(int i=0;i<n;i++){
		cout<<arr[i];
	}

}