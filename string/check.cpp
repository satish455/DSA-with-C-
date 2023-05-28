// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     char check;
//     cin>>check;
//     if(check=='a'||check=='e'||check=='i'||check=='o'||check=='u'){
//         cout<<"Vowel"<<endl;
//     }
// }






// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     char ch;
//     cin>>ch;
//     if((ch>='a' and ch<='z')){
//         cout<<"Yes it is alphabet"<<endl;
//     }
    
//     else  if((ch>='A' and ch<='Z')){
//         cout<<"Yes it is alphabet"<<endl;

//           cout<<int(ch);
//     }


//     else{
//         cout<<"Not an alphabet"<<endl;

      
//     }
// }








// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string check;
//     cin>>check;
//     int count=0;

//     for(int i=0;check[i]!='\0';i++){
//         count++;

//     }

//     cout<<count<<endl;

// }




// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string s;
//     cin>>s;

//     char ans;

//     for(int i=0;i<s.length();i++){
//         if(s[i]>='a' || s[i]<='z'){
//            ans=s[i]-32;
//         }
//         cout<<ans<<endl;
//     }
    
// }



// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string s;
//     cin>>s;
//     for(int i=0;i<s.size();i++){
//         if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){


//         }

//         else{
//             cout<<s[i];
//         }
//     }
// }


#include<bits/stdc++.h>
using namespace std;

// bool check(string s){
//     int l=0;
//     int r=s.size();

//     while(l<r){
//         if(s[l]!=s[r]){
//             return false;
//         }
//         l++;
//         r--;

//     }
//     return true;
// }


int main(){
    string s;
    cin>>s;
    int l=0;
    int r=s.size()-1;
    int flag=0;
    while(l<=r){
        if(s[l]!=s[r]){
           flag=1;
            break;
        }
        l++;
        r--;
    }


  if(flag==0){
    cout<<"Yes Palindrome";
  }
  else{
    cout<<"Not Palindrome";
  }

   
}