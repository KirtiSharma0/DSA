#include<iostream>
using namespace std;

void sumfunc(int sum, int n){
    //check, base case where the recursive func will terminated
    if(n==0){
        cout<<sum;
        return;
    }
    sumfunc(sum+n,n-1);
}
int main(){
    int n;
    cin>>n;
    sumfunc(1,n);
}