#include<iostream>
using namespace std;

int fibo(int n){
    if(n==1 || n==2) return 1;
    int leftans = fibo(n-1);
    int rightans = fibo(n-2);
    return leftans + rightans;  //rec formula
}
int main(){
    //1 1 2 3 5 8  13 21 34 55 89...

    cout<<fibo(12); //print 12 term
}