//find largest in 2d array elements
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
    int max = arr[0][0];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
             if(max<arr[i][j]) {
                max = arr[i][j];
             }
        }
    }
    cout<<"Maximum is = "<<max;
    return 0;
}