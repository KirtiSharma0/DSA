#include <iostream>
using namespace std;

int main() {
    int a ;
    cin>>a;
    cout<<"value of a is "<< a;
    if(a==9){
        cout<<"NINEY";
    }
    else if(a>0){
        cout<<"positive";
    }
    else {
        cout<<"negative";
    }

    return 0;
}