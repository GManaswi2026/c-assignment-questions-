//print sum of digit of no using while loop

#include<iostream>
using namespace std;
int main(){
    int n=24678;
    int digsum=0;
//while(n<0) i.e loop mei enter hi ni krega and gives zero 
    while(n>0){
        int lastdig = n%10;
        cout<<"last dig is:"<<lastdig<<"  ";
        digsum = digsum+lastdig;
        n = n / 10;
    }
    cout<<"sum of dig is:"<<digsum<<endl;
    return 0;
}