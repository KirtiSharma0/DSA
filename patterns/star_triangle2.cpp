//   ****
//   ***
//   **
//   *
#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"No. of rows = ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n+1-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}


// no.row + no.col = 5
// r + c = n+1
// no.col (stars) = n+1-i