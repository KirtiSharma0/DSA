//print (-1) in ans array if there is no greater value on right side
//if the greatest value is present on right side then print that value on the index of ans;
// 10 11 1 2 13 6 = ans = 13 13 13 13 -1 -1

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int max = arr[n-1];
    int ans[n];
    ans[n-1] = -1;

    for(int i=(n-2);i>=0;i--){
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