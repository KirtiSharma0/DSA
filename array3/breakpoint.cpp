//find breakpoint in an sorted array where it breaks the order 9 8 6 7 5 4 2 3 1

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n; //size
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool flag = true; //sorted
    int ans;
    for(int i=0;i<n-1;i++){
       if(arr[i]<arr[i+1]){
        ans = i;
       }
    }
    cout<<"index = "<<ans;
    return 0;
}