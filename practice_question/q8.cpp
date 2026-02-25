//print sum of n natural numbers'

#include<iostream>
using namespace std;
int main(){
    int sum =0;
    for(int i=0;i<=5;i++){
        sum=sum+i; //sum =+ i;
        cout<<sum<<"  ";
    }
    cout<<"sum is:"<<sum<<endl;
    return 0;
}