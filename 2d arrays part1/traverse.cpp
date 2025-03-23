#include<iostream>
using namespace std;
int main(){
     int arr[4][5] = {1,2,3,4,5,6,7,8,9,10,1,2,3,4,5,6,7,8,9,2};

     //i = row and j = column
     
     for(int i=0;i<4;i++){
        for(int j=0;j<5;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
     }
    
    return 0;
}