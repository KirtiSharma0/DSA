//roll number and marks of student side by side

#include<iostream>
using namespace std;
int main(){ 
    int m;
    cout<<"Rows = ";
    cin>>m;
    int n;
    cout<<"Columns = ";
    cin>>n;

    int table[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>table[i][j];
        } 
    }
    //print
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<table[i][j]<<" ";
        } 
        cout<<endl;
    }
    return 0;
}