//adding all elements

#include<iostream>
using namespace std;
int main(){
     int m,n;
     cout<<"R and C = ";
     cin>>m>>n;
     int arr[m][n];
     for(int i=0;i<m;i++ ){
        for(int j=0;j<n;j++){
        cin>>arr[i][j] ;
        } 
     }

     for(int i=0;i<m;i++ ){
        for(int j=0;j<n;j++){
        cout<<arr[i][j]<<" ";
        }
        cout<<endl;
     }
int sum=0;
for(int i=0;i<m;i++ ){
    for(int j=0;j<n;j++){
     sum = sum+arr[i][j];
    } 
 }
 cout<<"Sum is = "<<sum;

     return 0;
}