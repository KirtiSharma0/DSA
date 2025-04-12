#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;  //size
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //number of passes
    for(int i=0;i<n-1;i++){

        for(int j=0;j<n-1-i;j++){    //check and swap
           if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
           }
        }
    }

    //print ans
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }

    return 0;
}