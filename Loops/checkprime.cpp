#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"enter any number = ";
    cin>>n;
    for(int i=2 ; i<=n-1;i++){
        if(n%i==0){
            cout<<n<<"composite number" ;
            break;
        }
    }
    return 0;
}