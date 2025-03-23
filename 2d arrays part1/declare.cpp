#include<iostream>
using namespace std;
int main(){
    int matrix[3][3];  //size of matrix
    //rows = 3 and col = 3
    //index 0to2

    //initializing values
    matrix[0][0] = 1;
    matrix[0][1] = 2;
    matrix[0][2] = 3;
    matrix[1][0] = 4;
    matrix[1][1] = 5;
    matrix[1][2] = 6;
    matrix[2][0] = 7;
    matrix[2][1] = 8;
    matrix[2][2] = 9;

    for(int i=0;i<=2;i++){
        for(int j=0;j<=2;j++){
            cout<<matrix[i][j]<<" ";
            
        }
        cout<<endl;
    }
    
    return 0;
}