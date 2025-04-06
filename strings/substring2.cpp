//return second half of even len string using substr

#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"Enter string = ";
    cin>>s;
    int n = s.length();
    cout<<s.substr(n/2);
}