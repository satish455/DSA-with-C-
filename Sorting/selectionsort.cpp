// #include<bits/stdc++.h>
// using namespace std;
// int selection_Sort(int arr[],int n){
//     for(int i=0;i<n-1;i++){
//         int minindex=i;
//         for(int j=i+1;j<n;j++){
//           if(arr[minindex]>arr[j])
//           minindex=j;
           
//         }
//         swap(arr[minindex],arr[i]);
//     }

// }
// void print(int arr[],int n){
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
//     selection_Sort(arr,n);
//     print(arr,n);

// }







// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//  int arr[5]={5,4,7,9,3};

//  for(int i=0;i<5;i++){
//   int smallest=arr[i];
//   int pos=i;
//   for(int j=i+1;j<5;j++){
//     if(arr[j]<smallest){
//       smallest=arr[j];
//       pos=j;
//     }
//   }
//   int temp=arr[i];
//   arr[i]=arr[pos];
//   arr[pos]=temp;
//  }

//  for(int i=0;i<5;i++){
//    cout<<arr[i];
//  }

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
	for(int i=0;i<n;i++){
		int min=i;
		for(int j=i+1;j<n;j++){
			if(arr[j]<arr[min]){
				min=j;
			}
		}
		swap(arr[min],arr[i]);
	}
	for(int i=0;i<n;i++){
		cout<<arr[i];
	}
}