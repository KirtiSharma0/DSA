#include<iostream>
using namespace std;

int power(int a, int b){

    if(b==0) return 1; //basecase when power is zero

    return a*power(a,b-1);
}
int main(){
    int a,b;
    cin>>a;
    cin>>b;
    cout<<power(a,b);
}