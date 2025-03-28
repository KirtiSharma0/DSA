//adding two matrices
#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"R and C = ";
    cin>>m>>n;
    int mat1[m][n] , mat2[m][n];
//creating two matrices
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>mat1[i][j];
        } 
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<mat1[i][j]<<" ";
        } 
        cout<<endl;
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>mat2[i][j];
        } 
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<mat2[i][j]<<" ";
        } 
        cout<<endl;
    }

    int sum[m][n];
    for(int i=0;i<m;i++ ){
        for(int j=0;j<n;j++){
        sum[i][j] = mat1[i][j] + mat2[i][j] ;
        }
        cout<<"Sum is = "<<sum;
     }
    return 0;
}