//find breakpoint array and find the naerest biggest number
 
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n; //size
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans;
    for(int i=0;i<n-1;i++){
       if(arr[i]<arr[i+1]){
        ans = i;
       }
    }
    cout<<"index = "<<ans;
    int final;
    int diff = INT32_MAX;
    for(int i=ans+1;i<n;i++){
       if(arr[i]>arr[ans]){
        int z = arr[i]-arr[ans];
        if(z<diff){
        final = i;
        }
       }
    }
cout<<"index of nearest big no = "<<final;
    return 0;
}