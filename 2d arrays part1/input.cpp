#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Rows = ";
    cin>>m;

    int n;
    cout<<"Columns = ";
    cin>>n;
    
    int arr[m][n];

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}