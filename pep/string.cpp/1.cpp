#include<iostream>
#include<algorithm>
using namespace std;
string reverseString(string s){
   
        reverse(s.begin(),s.end());
        return s;

    
}
int main(){
    string s = "Hello";
    s=reverseString(s);
    cout<<s;
    return 0;
}