// income tax calc
//income<5l
//income 5 to 10l
//income >10l

#include<iostream>
using namespace std;
int main(){
    int income;
    float tax;
    cin>>income;
     if(income<500000){
        tax=0;
     }

    
    else if (income >= 500000 && income <= 1000000){
        tax=0.2*income;
        cout<<"tax is:"<<tax<<endl;
     }
     else{
       tax=0.3*income;
       cout<<"tax is:"<<tax<<endl;
     }
     return 0;
}