//calculate product of all elements of array

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array = ";
    cin>>n;
    int arr[n];  //array of size n
    int product=1;

    //taking input
    for(int i=0; i<=n-1;i++){
        cin>>arr[i];
        product = product*arr[i];
    }
    cout<<product;
    return 0;
}