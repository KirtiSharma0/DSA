//1 2 4 5 9 15 18 21  target=18
//found return index number , notfound return -1

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n; //size
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;

    int low = 0;
    int high = n-1;
    bool flag = false; //notfound
    while(low<=high){
        int mid = low + (high-low)/2;
        if(arr[mid]==target) {
            flag = true;
            cout<<mid;
            break;
        } 
        else if(arr[mid]>target) high = mid-1;
        else if (arr[mid]<target) low = mid+1;
    }
    return -1;
}