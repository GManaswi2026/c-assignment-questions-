//build a calculator using switch statement 
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    cout<<"a is :"<<a<<endl;
    cout<<"b is :"<<b<<endl;
    int operation;
    cin>>operation;
    cout<<"operation is :"<<operation<<endl;
    switch(operation){
        case 1: cout<<"multiplication:"<<a*b<<endl;
        break;
         case 2: cout<<"division:"<<a/b<<endl;
        break;
          case 3: cout<<"addition:"<<a+b<<endl;
        break;
          case 4: cout<<"subtraction:"<<a-b<<endl;
        break;
        default: cout<<"invalid input";
    }
    return 0;


}