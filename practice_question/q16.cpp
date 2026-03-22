//print start pattern
//*
//** 
//*** 
 

/** 
#include<iostream>
using namespace std;
int main(){
 
    for(int i =1;i<=4;i++){
        for(int j=1;j<=4;j++){
            if(i<=j){                          //i is always less than j condition true ;
                cout<< " * " <<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}

*/


#include<iostream>
using namespace std;
int main(){
 
    for(int i =1;i<=4;i++){
        for(int j=1;j<=i;j++){
            cout<< " * " <<" "; 
        }
        cout<<endl;
    }
    return 0;
}