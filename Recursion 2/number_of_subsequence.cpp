#include<iostream>
#include<vector>
using namespace std;

void func(int nums[], int count, vector<int>arr, int i){
    //edge case
    if(i==3){
       count++; 
       cout<<count;
       return ;
    }
    //picking element
    arr.push_back(nums[i]);
    func(nums, count, arr, i+1);
    arr.pop_back();     //skip element after picked up

    //not picking condition
    func(nums, count, arr, i+1);   //no need to assign value to arr bcz we havent picked this

}
int main(){
    int nums[] = {2,1,3};
    vector<int>arr;
    int count = 0;
    func(nums, count, arr, 0);  //initializing i = 0
}