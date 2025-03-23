#include<iostream>
using namespace std;
int main(){
    int matrix[3][3] = {{1,2,3} , {4,5,6} , {7,8,9}};  //type1
    
    cout<<matrix[1][2];
    cout<<endl;

    int grid[3][3] = {1,2,3,4,5,6,7,8,9};

    cout<<grid[2][2];
    
    return 0;
}