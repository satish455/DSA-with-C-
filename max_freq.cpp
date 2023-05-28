// #include<bits/stdc++.h>
// using namespace std;
// int maxfre(string s){
 
//  int arr[26]={0};
//  for(int i=0;i<s.size();i++){
//     char ch=s[i];
//     int number=0;
//     if(ch>='a' && ch<='z'){
//         number=ch-'a';
//     }
//     arr[number]++;

//  }
//  int maxi=-1;
//  int ans=0;
//  for(int i=0;i<26;i++){
    
//  }


// }
// int main(){

// }



#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;
  cin>>s;

  int freq[26]={0};
  
  for(int i=0;i<s.size();i++){
    freq[s[i]-97]++;
  }

  int max=-1;
  char ans;
  for(int i=0;i<s.size();i++){
    if(freq[s[i]-97]>max){
      max=freq[s[i]-97];
      ans=s[i];
    } 

  }
  cout<<ans<<endl;

  

  
  
  

  
}