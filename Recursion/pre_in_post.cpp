#include<iostream>
using namespace std;

void pip( int n){
    if(n==0) return;  //edge case

    cout<<"Pre"<<n<<endl;
    pip(n-1);
    cout<<"In"<<n<<endl;
    pip(n-1);
    cout<<"post"<<n<<endl;
}
int main(){
    pip(2);
}