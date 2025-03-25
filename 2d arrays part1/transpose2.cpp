//transpose and store it in new matrix
#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"rows = ";
    cin>>m;
    int n;
    cout<<"Columns = ";
    cin>>n;

    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    //print
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    int T[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            T[i][j]=arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<T[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}