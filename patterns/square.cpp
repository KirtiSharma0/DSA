//print sq pattern taking input n ; sq has all equal side
//no.rows=no.col

#include<iostream>
using namespace std;
int main(){
    int n; //side of sq
    cout<<"Side of square = ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<"*";
            
        }
        cout<<endl;
  }
  return 0;
}