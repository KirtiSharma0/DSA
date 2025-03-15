#include<iostream>
using namespace std;

int product(int x, int y, int z){
    return x*y*z;
}

int main(){
    cout<<product(2,5,10)<<endl;
    
    int x=10,y=10,z=10;
    cout<<product(x,y,z);
}