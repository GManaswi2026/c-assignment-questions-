//print the largest of three numbers
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b && a>c){
        cout<<"a is greatest";
    }
    else if (b>c){
        cout<<"b is gretaer";
    }
    else{
        cout<<"c is greater";
    }
}