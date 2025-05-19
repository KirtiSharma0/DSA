#include<iostream>
using namespace std;
int main(){
    int arr[13] = {1,2,2,3,3,3,3,3,4,4,5,8,9};
    int n=13;
    int x = 3;
    bool flag = false; //notfound
    int low=0;
    int high = n-1;

    while(low<=high){
        int mid = low + (high-low)/2;
        if(arr[mid]==x){
            if(arr[mid-1]!=x){
                flag = true;
                cout<<mid;
                break;
            }
            else { //arr[mid-1] is also x
                high = mid -1 ;
            }
        }
        else if(arr[mid]>x) high = mid-1;
        else if(arr[mid]<x) low = mid+1;
    }
    if(flag==false) cout<<-1;
    return 0;
}