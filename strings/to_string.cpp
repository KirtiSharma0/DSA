//converts integer to string
#include<iostream>
using namespace std;
int main(){
    int n = 1234;
    string s = to_string(n);
    cout<<s<<endl;
    cout<<s.length();  //count number of digits

    return 0;
}