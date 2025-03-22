//calculate the sum of all elements in array taken input 
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array =  ";
    cin>>n;

    int sum=0;
    int arr[n];

 //input of array elements
 for(int i=0;i<=n-1;i++){
    cin>>arr[i]; 
    sum = sum+arr[i];
 }
    cout<<sum;
     
    return 0;
}