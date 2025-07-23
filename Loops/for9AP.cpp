//upto all positive term = 100,97,94....
#include<iostream>
using namespace std;
int main(){
    int n = 100;
    for(int i=100;i>=3*n-1;i--){
        cout<<i<<endl;;
    }
    return 0;
}