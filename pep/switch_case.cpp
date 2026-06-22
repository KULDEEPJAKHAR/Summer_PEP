#include<iostream>
using namespace std;
int main(){
    char grade = 'A';
    switch(grade){
        case 'A':
        cout<<"Excellent"<<endl;
        case 'B':
        cout<<"Average"<<endl;
        case 'C':
        cout<<"upto the mark"<<endl;
        default:
        cout<<"Invalid"<<endl;
    }
}