//print GP = 1,2,4,8,16,32...
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cout<<"Enter value = ";
    cin>>n;
     for(int i=0;i<=n-1;i++){
        cout<<pow(2,i)<<endl;
     }
    return 0;
}