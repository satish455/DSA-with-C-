// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//   int t;
//   cin>>t;
//   while(t--){
//     int freq1[26]={0};
//     string str;
//     cin>>str;
    
//     for(int i=0;i<str.size();i++){
//       freq1[str[i]-97]++;
//     }


//     for(int i=0;i<str.size();i++){
//          if(freq1[str[i] - 97]!=0) {
 
//             cout<<str[i]<<"=="<<freq1[str[i]-'a']<<" "<<endl;
  
//             freq1[str[i]-'a']=0;
            
//          }

      
        
//     }
     
      
//   }

//   return 0;
// }









#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int freq[26]={0};
    for(int i=0;i<s.size();i++){
        freq[s[i]-97]++;
    }

    int max=INT_MIN;
    for(int i=0;i<s.size();i++){
        if(freq[s[i]-97]!=0){
            cout<<s[i]<<"=="<<freq[s[i]-97]<<endl;
            freq[s[i]-97]=0;
        }

    }

}