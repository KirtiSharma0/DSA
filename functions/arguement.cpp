#include<iostream>
using namespace std;

void star(int x){
    for(int i=1;i<=x;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
int main(){
    star(3);
    star(4);
    star(5);
}