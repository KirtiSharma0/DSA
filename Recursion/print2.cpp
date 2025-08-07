//print 1 to n
#include<iostream>
using namespace std;

void print (int i, int n){
    if(i>n) return;  //check and termination point

    cout<<i<<endl;
    
    print(i+1,n);  //then i increases
}
int main(){
    int n;
    cin>>n;
    print(1,n);  //initially passing i as 1
}