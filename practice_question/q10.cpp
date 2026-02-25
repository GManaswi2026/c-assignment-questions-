//print a pattern using while loop
// ****
// **** 
// ****

#include<iostream>
using namespace std ;
int main(){
    int n=12;
    for(int i=0;i<=4;i++){
       cout<<"****"<<endl;
    }
    cout<< endl;

    for(int i=n;i>=0;i--){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}