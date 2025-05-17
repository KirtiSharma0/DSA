//find target x . find the first occurrence of x in array and if notfound return -1
//find lower bound if target element is not found
// 1 2 4 5 15 18 21 24  target=20 , notfound , lowerbound=18 , upperbound=21

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