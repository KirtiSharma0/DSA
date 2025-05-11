//find target x . find the first occurrence of x in array and if notfound return -1
//find lower bound if target element is not found
// 1 2 4 5 15 18 21 24  target=20 , notfound , lowerbound=18 , upperbound=21

#include<iostream>
using namespace std;
int main(){
    int arr[8] = {0,1,2,3,4,6,9,12};
    int n=8;
    int x = 3;
     for(int i=0;i<n;i++){
        if(i!=arr[i]){
            cout<<i; //missing number
            break;
        }
     } 
    return 0;
}