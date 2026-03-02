//print the sum of odd digits in the numbers

#include<iostream>
using namespace std;
int main(){
    int n=14367;
    int sum=0;
    while(n>0){
        int lastdig = n%10;
        if(lastdig %2 != 0){
            sum += lastdig;
        }
        n = n/10;
    }
 cout<<"sum is:"<<sum<<endl;
 
}