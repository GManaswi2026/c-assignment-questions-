//simple interest calculator
// i/p: p*r*t
//o/p:p*r*t/100

#include<iostream>
using namespace std;
int main(){
    int p,r,t;
    cin>>p;
    cin>>r;
    cin>>t;

    int si = (p*r*t)/100;
    cout<<"si is :"<<si<<endl;
    return 0;

}