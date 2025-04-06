#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n; //size
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //finding breakpoint
    int point;
    for(int i=0;i<n-1;i++){
        if(arr[i]<arr[i+1]){
        point = i;
        }
    }
    cout<<"Index at which sorting breaks = "<<point<<endl;

    //finding greater and closest value after point index
    int diff = INT16_MAX;
    int close;
    for(int i=point+1;i<n;i++){
       if(arr[i]>arr[point]){
        int z = arr[i+1] - arr[point];
        if(z<diff) close = i;
       }
    }
    cout<<"Greater and closest value is present at index = "<<close;
}
 