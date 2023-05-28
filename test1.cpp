// #include<iostream>
// using namespace std;
// int main() {
// 	int min,max,step;
// 	cin>>min>>max>>step;
// 	for(int i=min;i<=max;i=i+step){
// 		// int cel=(5/9)*(i-32);
// 		// cout<<i<<" "<<cel<<endl;
//       // cout<<i;
// 	}

//    cout<<5/9;
// 	return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;
// class hero1{
//  private:
//   int x;
//  public:
//   void show(int a){
//    x=a;
//    cout<<a;
//   }
// };
// class hero{
//     private:
//     int age;
//     public:
//     void checkage(int ag1 ){
//         age=ag1;

//         cout<<"The heros age is = "<<ag1<<endl;
//     }

// };
// int main(){
//    hero obj;
//    hero1 obj1;

   
//    obj.checkage(12);

// }



// #include<bits/stdc++.h>
// using namespace std;
// class omg{
//    public:
//    int a;
//    public:
//    omg(int x){
//       a=x;
//       cout<<"Default constructor"<<x<<endl;
//    }
// };
// int main(){
//    omg obj(3);
//    omg obj2(obj);
   

// }


// #include<bits/stdc++.h>
// using namespace std;
// struct test1
// {
//    int a;

// };

// int main(){
//    struct test1 obj;


// }


// #include<bits/stdc++.h>
// using namespace std;
// class test{
//    int a;
//    public:

//    test(int x){
//       a=x;
//    }

//   friend int frd(test);

// };

// int frd(test obj){
//    cout<<obj.a<<endl;
// }

// int main(){

//    test ob(6);
//    frd(ob);
   

// }


// #include<bits/stdc++.h>
// using namespace std;
// class base{
//   public:
//   void show(){
//    cout<<"i am base class"<<endl;
//   }
// };

// class child :public base{
//    void show1(){
//       cout<<"I am child class"<<endl;
//    }

// };

// int main(){
//    base *obj=new base;
//    child obj1;

//   (*obj).show();
//    obj1.show();
   
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//    int num;
//    cin>>num;
   
//    int octal[1000];
  
//   int i=0;
//    while(num!=0){
//       octal[i]=num%8;
//       i++;
//       num=num/8;

//    }

//    for(int j=i-1;j>=0;j--){
//       cout<<octal[j];
//    }

// }


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// int i,j,k=0;
// for( i=1;i<=n;i++){
//   i<=5?k++:k--;

//    for(j=1;j<=n;j++){

//       if(j<=6-k||j>=4+k){
//         cout<<"*";
//       }
//       else{
//            cout<<" ";
//       }
       
//    }
//    cout<<endl;
// }
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//   int n;
//   cin>>n;
//   int count=0;
// for(int i=0;i<n;i++){


//   for(int j=0;j<n;j++){
    
//     cout<<"*";
//   }
//   cout<<endl;
// }

// }


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//   string s;
//   cin>>s;

//   for(int st=0;st<s.size();st++){
//     for(int end=st;end<s.size();end++){
//       for(int i=st;i<end;i++){
//         cout<<s[i];
//       }
      
//       cout<<endl;
      
//     }
    
//   }
// }



// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//   string str;
//   cin>>str;

//   string str1;
//   cin >>str1;
//   int freq1[26]={0};
//   int freq[26]={0};

//   for(int i=0;i<str.size();i++){
//     freq[str[i]-'a']++;
    
//   }
//   for(int i=0;i<str1.size();i++){
//     freq1[str1[i]-'a']++;
    
//   }
//   bool isanagram=true;

//   for(int i=0;i<26;i++){
//     if(freq[i]!=freq1[i]){
//      isanagram=false;
   
//      cout<<"not anagram "<<endl;

//     }
//   }
//   if(isanagram){
//     cout<<"given string is anagram"<<endl;
//   }
// }

#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;
  cin>>s;
  for(int i=0;i<s.size();i++){
   cout<<s[i];
  
  if(i!=s.size()-1){
   cout<<s[i+1]-s[i];
  }
  }
}