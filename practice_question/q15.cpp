// no is prime or not 

#include <iostream>
#include<cmath>
using namespace std;

int main(){
    int n= 23;
    bool isprime =true;
  for(int i=2; i<=sqrt(n);i++){
    if(n%i == 0){
      isprime =false;
      break;
    }
   
  }
  if(isprime){
        cout<<"no is prime:"<<n;
    }
    else{
        cout<<"no is not prime";

    }
  return 0;
}