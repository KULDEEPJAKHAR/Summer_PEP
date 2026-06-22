#include<iostream>
using namespace std;
int main(){
    int age = 20;
    int number  = 15;
    if(age>=18&&number>10){
        cout<<"1"<<endl;

    }
    else if(age>18&&number<18){
        cout<<"@";
    }
    else{
        cout<<"!";
    }
}