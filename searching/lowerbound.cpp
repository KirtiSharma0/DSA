//find lower bound if target element is not found
// 1 2 4 5 15 18 21 24  target=20 , notfound , lowerbound=18 , upperbound=21

#include<iostream>
using namespace std;
int main(){
    int arr[9] = {1, 2, 4, 5, 15, 18, 21, 24};
    int x = 20;
    for(int i=0;i<9;i++){
        if(arr[i]>x){
           cout<<arr[i-1];
           break;
        }
    }
    return 0;
}