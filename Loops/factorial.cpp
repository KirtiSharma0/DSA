#include<iostream>
using namespace std;
int main (){
    int n ;
    cout<<"Enter value = ";
    cin>>n;
    int factorial=1;
    for(int i=n;i>=1;i--) {
        cout<<i; 
         factorial = factorial*i;
    }
    cout<<endl;
    cout<<factorial ;
    return 0;
}