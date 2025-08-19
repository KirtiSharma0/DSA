#include<iostream>
using namespace std;

void func(int arr[], int maxsum, int sum, int i){
    if(i>=3){
        if(sum==0){
            maxsum = sum;
            maxsum = max(maxsum,sum);
            return;
        }
        if(sum<0) return;
    }

    //picking condition
    func(arr, maxsum, sum-arr[i], i+1);

    //not picking
    func(arr, maxsum, sum, i+1);
}
int main(){
    int arr[]  = {4,5,6};
    int maxsum = INT16_MIN;
    int sum = 3;
    func(arr, maxsum, sum, 0);    //initilaize i=0
}