#include<iostream>
using namespace std;
void rowSum(int arr[][3],int row,int col){
    for(int i = 0;i<row;i++){
        int temp = 0;
        for(int j = 0;j<col;j++){
            temp +=arr[i][j];

        }
        cout<<temp<<endl;
    }
}
int main(){
    int arr[3][3];
    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            cin>>arr[i][j];
        }}
        rowSum(arr,3,3);
    
    return 0;
}