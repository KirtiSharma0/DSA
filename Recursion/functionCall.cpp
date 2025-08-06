#include<iostream>
using namespace std;

void gun(){         //4 gun works
    cout<<"Bello";
    return;        //to end the code, anything after return will not run
}
void fun(){
    cout<<"Hello";  //2 fun works
    gun();          //3 fun called gun
    return;
}
int main(){
    fun();  //1 called fun
}