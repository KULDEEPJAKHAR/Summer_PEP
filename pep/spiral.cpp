#include<iostream>
using namespace std;
void printSpiral(int arr[][4],int rows,int cols){
   
    int top = 0;
    int bottom = rows-1;
    int left = 0;
    int right= cols-1;
    while(top<=bottom&&left<=right){
        for(int i = left;i<right;i++){
            cout<<arr[top][i]<<endl;

        }
        top++;
        for(int j= top;j<bottom;j++){
            cout<<arr[right][j]<<endl;

        }
        right--;
        for(int i= right;i>left;i--){
            cout<<arr[bottom][i]<<endl;
        }
        bottom--;
        for(int j = bottom;j>top;j--){
            cout<<arr[left][j]<<endl;
        }
        left++;
    }
}
int main(){
    int arr[4][4]={{6,8,10,2},{14,1,13,15},{5,11,9,3},{12,16,4,7}};
    printSpiral(arr,4,4);
    return 0;

}