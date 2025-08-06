#include<iostream>
using namespace std;

void fun(int n){
    if(n==0) return;   //check and if true then return, anything after return will not run
    cout<<"Recursion"<<endl;
    fun(n-1);  //again call fun with argument (n-1)
}
int main(){
    fun(4);
}