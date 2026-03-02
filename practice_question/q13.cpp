// print the digits of a given number in reverse using while loops 
//n=10829

#include<iostream>
using namespace std;
int main(){
    int n=10829;
  while(n>0){
    int lastdig = n%10;
    cout<<lastdig <<" ";
    n=n/10;
  }
 
  return 0;
}