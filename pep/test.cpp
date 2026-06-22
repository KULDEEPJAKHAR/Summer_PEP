#include<iostream>
using namespace std;
int main(){
    cout<<"Enter age: ";
    int age;
    cin>>age;
    cout<<"Enter number: ";
    int number;
    cin>>number;
    if(age>=18 && number>10){
        cout<<"Test exist";
    }
    else{
        cout<<"Test doesn't exits";
    }
}