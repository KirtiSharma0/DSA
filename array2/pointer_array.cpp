#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4};
    //address of array in pointers
    int*ptr = arr;
    cout<<ptr<<endl;

    //print array
    for(int i=0;i<=3;i++){
        cout<<ptr[i]<<" ";
    }
    cout<<endl;

    //change and print
    *ptr = 8;
    for(int i=0;i<=3;i++){
        cout<<ptr[i]<<" ";
    }
}