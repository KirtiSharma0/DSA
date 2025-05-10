//find lower bound if target element is not found
// 1 2 4 5 15 18 21 24  target=20 , notfound , lowerbound=18 , upperbound=21

#include<iostream>
using namespace std;
int main(){
    int arr[9] = {1, 2, 4, 5, 15, 18, 21, 24};
    int n=9;
    int x = 12;
    bool flag = false;
    int low = 0;
    int high = n-1;
    while(low<=high){
        int mid = low + (high-low)/2;
        if(arr[mid]==x) {
            flag = true;
            cout<<arr[mid-1];
            break;
        }
        else if(arr[mid]<x) low=mid+1;
        else if(arr[mid]>x) high = mid-1;
    }
  if(flag==false){
    cout<<arr[low];
  }
    return 0;
}