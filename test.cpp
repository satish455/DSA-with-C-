// #include<bits/stdc++.h> 
// using namespace std; 

// int main(){
//    string s;
//    cin>>s;
  
//   sort(s.begin(),s.end());
//    string ans="";
    
//    int i=0;
//    ans=s[0];

//    for( i=1;i<s.size();i++){
//        if(s[i]!=s[i-1]){
//           ans+=s[i];
//        }
//    }
//    cout<<ans;
   
// }


// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     string s;
//     cin>>s;
    
//     for(int i=0;i<s.size();i++){
//         tolower(s[i]);
//        if((s[i]=='a')||(s[i]=='e')||(s[i]=='i')||(s[i]=='u')||(s[i]=='o')){
            
          
//        }
//        else{
//         cout<<'.';
//         char(s[i]);
//         cout<<s[i];
//        }

   
//     }
// }






// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     int res[30]={n};
//     cout<<res;
//     int productbeforele=1;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<n;i++){
//         res[i]=productbeforele;
//         productbeforele*=arr[i];
//     }
//     cout<<res;
    

// }












// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//    int n;
//    cin>>n;
//    int arr[n];
//    for(int i=0;i<n;i++){
//     cin>>arr[i];
//    }
//    int mul=1;

//    for(int i=0;i<n;i++){
//        mul*=arr[i];
//    }
//    for(int i=1;i<=n;i++){
//     cout<<mul/i<<" ";
//    }
//    cout<<endl;

   
// }






// #include <bits/stdc++.h>
// using namespace std;

// bool isPossible(int a[], int n)
// {
// 	int cur = a[0];
// 	cur--;

// 	for (int i = 1; i < n; i++) {
// 		int nxt = a[i];
// 		if (nxt > cur)
// 			nxt--;

// 		else if (nxt < cur)
// 			return false;

		
// 		cur = nxt;
// 	}

	
// 	return true;
// }

// int main()
// {
//     int n;
//     cin>>n;
// 	int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
// 	int n = sizeof(a) / sizeof(a[0]);

// 	if (isPossible(a, n))
// 		cout << "Yes";
// 	else
// 		cout << "No";

// 	return 0;
// }





// Bubble sort;

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// 	int n;
// 	cin>>n;
// 	int arr[n];
// 	for(int i=0;i<n;i++){
// 		cin>>arr[i];
// 	}
// 	for(int i=0;i<n;i++){
// 		for(int j=0;j<n-1;j++){
// 			if(arr[j]>arr[j+1]){
//                swap(arr[j],arr[j+1]);
// 			}
			
// 		}
// 	}

// 	for(int i=0;i<n;i++){
// 		cout<<arr[i];
// 	}
// }






// selection sort
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// 	int n;
// 	cin>>n;
// 	int arr[n];
// 	for(int i=0;i<n;i++){
// 		cin>>arr[i];
// 	}
// 	for(int i=0;i<n;i++){
// 		int min=i;
// 		for(int j=i+1;j<n;j++){
// 			if(arr[j]<arr[min]){
// 				min=j;
// 			}
// 		}
// 		swap(arr[min],arr[i]);
// 	}
// 	for(int i=0;i<n;i++){
// 		cout<<arr[i];
// 	}
// }




// inserstion sort

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// 	int n;
// 	cin>>n;
// 	int arr[n];
// 	for(int i=0;i<n;i++){
// 		cin>>arr[i];
// 	}
//       int i,j;
// 	for(i=1;i<n;i++){
// 		int pickedup_card=arr[i];
// 		for(j=i-1;j>=0 && arr[j]>pickedup_card;j--){
			
// 				arr[j+1]=arr[j];
			
// 		}
// 		arr[j+1]=pickedup_card;
// 	}

// 	for(int i=0;i<n;i++){
// 		cout<<arr[i];
// 	}

// }





// #include<bits/stdc++.h>
// using namespace std;
// int main() {
// 	long long int n;
// 	cin>>n;
// 	long long int arr[n];
// 	long long int target;
// 	cin>>target;
// 	int flag=0;
// 	for(int i=0;i<n;i++){
// 		cin>>arr[i];
// 	}

// 	for(int i=0;i<n;i++){
// 		if(arr[i]==target){
// 			cout<<i<<endl;
// 			flag++;
// 		}
// 	}
// 	if(flag==0){
// 		cout<<"-1"<<endl;
// 	}
// 	return 0;
// }








// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n,m;
//     cin>>n>>m;
//     int arr[n];
// 	int arr1[m];
//     for(int i=0;i<n;i++){
//         cin>>arr[i]; 
//     }
// 	for(int j=0;j<m;j++){
//         cin>>arr1[j]; 
//     }

//     int count=0;

//     for(int i=0;i<n;i++){
		
// 		for(int j=0;j<m;j++){
//             if(arr[i]<=arr[j]){
//                 count++;
// 				cout<<arr[i]<<endl;
// 				i++;
// 			}

			
// 		};
        
//     }
// 	cout<<count;
// 	cout<<endl;
	


    
// }





#include<bits/stdc++.h>
using namespace std;
int main(){
	int m;
	cin>>m;
	char org[m];
	char copy[10000];
    int n=strlen(org);
	for(int i=0;i<m;i++){
       cin>>org[i];
	   
	}
	for(int i=0;i<m;i++){
      cout<<org[i];
	}
}