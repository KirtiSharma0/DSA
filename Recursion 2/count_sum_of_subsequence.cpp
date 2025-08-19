//count number of pairs of subsequence whose sum is equal to x
#include<iostream>
using namespace std;

void func(int arr[], int sum, int count, int i){
    //edge case
    if(i>=3){
      if(sum==0){
        count++;
        return;
      }
      if(sum<0){  //sum neg
        return;
      }
    }
    //picking
    func(arr, sum-arr[i], count, i+1);

    //not picked
    func(arr, sum, count, i+1);
}
int main(){
    int arr[] = {1,2,3};
    int sum = 3;
    int count = 0;
    func(arr, count, sum, 0);
}