
#include<bits/stdc++.h>
using namespace std;
bool sorted(int arr[],int idx,int n){
 

 if(idx==n-1){
   return true;
  }

  if(arr[idx]>arr[idx+1]){
	return false;
  }

  
   sorted(arr,idx+1,n);

   
  
  
  
  


}
int main(){
    int arr[5]={5,3,1,2,9};
	int n=5;
	if(sorted(arr,0,n))
    cout<<"yes"<<endl;
    else
		cout<<"no"<<endl;
	

}