//print (-1) in ans array if there is no greater value on left side
//if the greatest value is present on left side then print that value on the index of ans;
// 7 6 1 8 13 -1 4 = ans = -1 7 7 -1 -1 13 13

#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n; //size
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max=arr[0];
    int ans[n];
    ans[0] =-1;
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            ans[i] = -1;
            max = arr[i];
        }
        else if(max>arr[i]){
            ans[i] = max;
            
        }
    }

    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}