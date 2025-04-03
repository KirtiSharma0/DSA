//   1
//   13
//   135
//   1357
#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"No. of rows = ";
    cin>>n;
    for(int i=1;i<=n;i++)  //print first "i" odd nums
    {
        for(int j=1;j<=2*i-1;j+2){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}
