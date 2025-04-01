#include<iostream>
using namespace std;
int main(){
    string s = "kirti";
    cout<<s<<endl;
    cout<<s.substr()<<endl;
    cout<<s.substr(1)<<endl;
    cout<<s.substr(2)<<endl;
    cout<<s.substr(3)<<endl;
    cout<<s.substr(4)<<endl;

    //middle substrings (idx,len)
    cout<<s.substr(1,3);
    return 0;
}