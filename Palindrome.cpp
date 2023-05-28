// #include<bits/stdc++.h>
// using namespace std;
// bool checkPal(string s){
    
//     int l=0;
//     int r=s.size()-1;
//     while(l<r){
//         if(s[l]!=s[r]){
//             return 0;
            
//         }
//         else{
//             l++;
//             r--;
//         }
//     }
//     return true;

// }
// int main(){
//     string check;
//     cin>>check;
//     checkPal(check)?cout<<"This is Palindrome ":cout<<"This is not Palindrome";
    
   
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string s;
//     cin>>s;
//     for(int i=0;i<s.size();i++){
//         if(s[i]>='A' && s[i]<='Z'){
//             s[i]=s[i]-'A'+'a';
//         }
//         cout<<s[i];
//     }
// }



#include<bits/stdc++.h>
using namespace std;
char  valid(char ch){
    if((ch>='A' && ch<='Z')||(ch>='a'&&ch<='z')||(ch>='1'&&ch<='9')){
        return true;
    }
    else{
        return false;
    }
}
char convert(char ch){
    if(ch>='A'&&ch<'Z'){
        ch=ch-'A'+'a';
    }
    return ch;


}

bool checkpalindrome(string s){
       
      int left=0;
      int right=s.size()-1;
      while(left<right){
        if(!valid(s[left])){
            left++;
            continue;
        }
        if(!valid(s[right])){
            right--;
            continue;
        }

        if(convert(s[left])!=convert(s[right])){
            return false;
        }
        else{
            left++;
            right--;
        }
        

      }
      return true;
}

int main(){
    string st;
    getline(cin,st);
   
    checkpalindrome(st)?cout<<"yes palindrome":cout<<"not palindrome";

 

}