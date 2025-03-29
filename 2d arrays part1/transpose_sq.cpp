#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"rows and columns = ";
    cin>>m;
     
    int arr[m][m];
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    //print
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    //transpose in the same matrix
    for(int i=1;i<m;i++){
        for(int j=i+1;j<m;j++){
             int temp = arr[i][j];   //swapping
             arr[i][j] = arr[j][i];
             arr[j][i] = temp;
        }
    }
    //print transpose
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}