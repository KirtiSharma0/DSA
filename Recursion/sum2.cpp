#include<iostream>
using namespace std;

int sumfunc(int n){
    if(n==0) return 0;
    
    return n + sumfunc(n-1);
}
int main(){ 
   cout<< sumfunc(20);
}