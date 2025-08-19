//max num of even elements in given array
#include<iostream>
using namespace std;
int main(){
    int arr[] = {2,1,3,4,6,8,7,1,9};
    int k = 3;  //window 
    int count = 0;

    //first window; 2 1 3 even is only one ele
    for(int i=0;i<k;i++){
       if(arr[i]%2==0) count++;
    }

    //applying sliding window
    int maxeven = 0;
    int i = 1;
    int j = k;
    while(j<9){
        if(arr[i-1]%2 == 0)  count--;   //to remove
        if(arr[j]%2 == 0)  count++;     //to add
        i++;
        j++;
        if( maxeven < count) maxeven = count;
    }
    
    cout<<maxeven;
}