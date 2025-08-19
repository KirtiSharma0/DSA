#include<iostream>
using namespace std;
int main(){
    int arr[7] = {1,2,3,4,5,6,7};
    int k = 3;   //window size

    //for first window ; 1 2 3
    int sum = 0;
    for(int i=0;i<k;i++){
        sum = sum + arr[i];
    }

    //applying sliding window for other pairs
    int maxsum = INT16_MIN;
    int nextsum = 0;
    int i = 1;
    int j = k;
    while(j<7){  //j<arr.size
    nextsum = sum - arr[i-1];   //removing previous value
    nextsum = sum + arr[j];     //adding next value
    i++;
    j++;
    }
    if(maxsum < nextsum) maxsum = nextsum;
    cout<<nextsum;
    return 0;
}