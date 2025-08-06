//print n to 1
#include<iostream>
using namespace std;

void print(int n){
    if(n==0) return;  //base case, termination point
    cout<<n;
    print(n-1);
    return;
}
int main(){
    int n;
    cin>>n;
    print(n);
}