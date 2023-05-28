#include<bits/stdc++.h>
using namespace std;
bool checksub(string arr1,string arr2,int m,int n){
    
    if(n>m){
        return false;
    }
    int start=0;
    int count=0;
    int j=0;
    while(start<m){
        if(arr2[j]==arr1[start]){
            start++;
            count++;
            j++;
            if(count==n){
                break;
            }

           
        }
         else{
                start++;
            }

    }
    if(count==n)
    return true;
    else
    return false;



}
int main(){

    int t;
    cin>>t;
    while(t--){
         string s1;
   cin>>s1;
   int m=s1.size();
  
   string s2;
   cin>>s2;
    int n=s2.size();
    
    
    checksub(s1,s2,m,n)?cout<<"yes":cout<<"no"<<endl;

    }
  
}











// brute force O(n2);



// #include<bits/stdc++.h>
// using namespace std;


// bool isSubSequence(string str1, string str2, int m, int n)
// {
// 	int i = 0; 
// 	for (int j = 0; i < n && j < m; j++)
// 		if (str1[j] == str2[i])
// 			i++;

	
// 	return (i == n);
// }


// int main()
// {
// 	int t;
// 	cin>>t;
// 	while(t--){
// 		string str1;
// 	cin>>str1; 
// 	string str2;
// 	cin>>str2;
// 	int m = str1.size();
// 	int n = str2.size();
// 	isSubSequence(str1, str2, m, n) ? cout << "YES": cout << "NO";
// 	cout<<endl;
	
									
// 	}
	
// 	return 0;
// }