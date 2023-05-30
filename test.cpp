#include<bits/stdc++.h>
using namespace std;
void Copy(char a[],char b[]){
	int len=strlen(b);
	for(int i=0;i<len;i++){
     a[i]=b[i];
	}

	return;
}
int main(){
	
	char org[1000];
	int n;
	cin>>n;
	int largest_len=0;
	char largest[1000];
	for(int i=0;i<n;i++){
		cin.getline(org,1000);
       int len=strlen(org);
	   if(largest_len<len){
		largest_len=len;
		Copy(largest,org);
	   }
	   
	}
	cout<<largest;
	
	
}