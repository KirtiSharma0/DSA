#include<iostream>
#include<vector>
using namespace std;

int main(){
    //need not to mention size
    vector<int>arr;
     
    //for inserting / taking input dont use []
    arr.push_back(6);
    arr.push_back(3);
    arr.push_back(5); 
    
    //update or access use []
    cout<<arr[0]<<" ";
    cout<<arr[1]<<" ";
    cout<<arr[2]<<" "<<endl;

    cout<<arr.size()<<endl;
    cout<<arr.capacity()<<endl;
}