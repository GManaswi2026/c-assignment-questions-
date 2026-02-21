//Question2:Enter cost of 3 items from the user (using float datatype)-a pencil,a pen and an eraser.You have to output the total cost of the items back to the user as their bill.

#include<iostream>
using namespace std;

int main(){
    float pencil,pen,eraser;
    cout<<" cost of pencil :";
    cin>>pencil;

     cout<<"cost of pen :";
    cin>>pen;

     cout<<" cost of eraser :";
    cin>>eraser;

    float item = pencil+pen+eraser;
    cout<<"total cost of item is :"<<item<<endl;
    return 0;


}