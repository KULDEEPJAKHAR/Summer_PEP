#include<iostream>
using namespace std;
int main(){
    char grade = 'A';
    switch(grade){
        case 'A':
        cout<<"Excellent"<<endl;
        break;
        case 'B':
        cout<<"Average"<<endl;
        break;
        case 'C':
        cout<<"upto the mark"<<endl;
        break;
        default:
        cout<<"Invalid"<<endl;
    }
}