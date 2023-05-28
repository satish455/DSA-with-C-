#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;
  getline(cin,s);
  
  string temp;
  pair<char,int>ans;
  int flag=0;
  for(int i=0;i<s.size();i++){
    
    if(s[i]>='A'&&s[i]<='Z'){
      char ch=s[i]-'A'+'a';
      temp.push_back(ch);
    }
    if(s[i]>='a' && s[i]<='z'){
      temp.push_back(s[i]);
    }
  }
  int freq[26]={0};
  for(int i=0;i<temp.size();i++){
       freq[temp[i]-97]++;
  }
   for(int i=0;i<temp.size();i++){
       if(freq[temp[i]-97]!=0){
        if((temp[i]=='a')|| (temp[i]=='e')|| (temp[i]=='i')|| (temp[i]=='o')|| (temp[i]=='u')){

          // cout<<temp[i]<<"=="<<freq[temp[i]-97]<<endl;

          ans.first=temp[i];
          ans.second=freq[temp[i]-97];
          
          cout<<ans.first<<":"<<ans.second<<" ";
          freq[temp[i]-97]=0;
          flag++;
          
        }
       

        

        
       }
       
  }
  
if(flag==0)
       cout<<"No volwels found"<<endl;

}