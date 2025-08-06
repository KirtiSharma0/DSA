#include<iostream>
using namespace std;

int fact(int n){
    if(n==1 || n==0) return 1;   //func base case, where rec ends

    return n*fact(n-1);
}
int main(){
    cout<<fact(5);
}