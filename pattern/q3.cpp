//inverted and rotated half pyramid pattern
//   *
//  **
// ***
//****

// #include<iostream>
// using namespace std;
// int main(){
//  for(int i= 1;i<=4;i++){                         //wrong approach 
//     for(int j=1;j<=4-i;j++){
//         cout<<" ";
//         for(int k=1;k<=i;k++){
//             cout<<"*";
//         }
//     }
//     cout<<endl;

//     }
        
// }


#include<iostream>
using namespace std;
int main(){
    int n =4;
    for(int i=1;i<=n;i++){
     //spaces
     for (int j=1;j<=n-i;j++){
        cout<<" ";
     }
     //stars
     for(int j=1;j<=i;j++){
        cout<<"*";
     }
        cout<<endl;
    }
}