#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n-1;i++){  //number of passes
       
        for(int j=0;j<n-1-i;j++){  //traversing array
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];  //swapping
                arr[j+1] = temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}