// The all data members and methods are combined in a class is called encapsulation the main objective of encaptulation is to provide security


// #include<bits/stdc++.h>
// using namespace std;
// class Something{
//     private:
//     int p;
//     int q;

//     public:
//     void produce(int input){
//         p=input;
//         q=p/2;
//         cout<<q<<endl;
//     }

// };

// int main(){
//     Something obj;
//     obj.produce(4);

// }






// #include<bits/stdc++.h>
// using namespace std;
// int main(){

//     int n;
//     cin>>n;

//     // int number;
//     // cin>>number;

//     int n1=0;
//     int n2=1;
    
   
   

//     for(int i=0;i<n;i++){

    
//     for(int j=0;j<n;j++){
//         if(j<=i){
//      
//         }
       
        
//     }

//     cout<<endl;
//     }
// }



// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int number;
//     cin>>number;

//     int n1=0;
//     int n2=1;
    
//    cout<<n1<<" "<<n2<<" ";
//     for(int i=2;i<number;i++){
//       int n3=n1+n2;
//        cout<<n3<<" ";
//        n1=n2;
//        n2=n3;
//     }
// }


// #include<iostream>

// using namespace std;

// int main()
// {
//      int n,i,j,k;
//      cin>>n;

//      k=(2*n)-3;

//      for(i=1;i<=n;i++)
//      {
//           for(j=1;j<=i;j++)
//                cout<<j<<"\t";
//           for(j=1;j<=k;j++)
//                cout<<"\t";
//           if(i==n)
//           {
//                for(j=i-1;j>=1;j--)
//                cout<<j<<"\t";
//           }
//           else
//           {
//                for(j=i;j>=1;j--)
//                cout<<j<<"\t";
//           }
//           k-=2;
//           cout<<"\n";
//      }
// }



#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        if(j<=i){
          cout<<j<<" ";
        }
        
    }
    cout<<endl;
}
}