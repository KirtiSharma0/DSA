#include<iostream>
using namespace std;
int main(){
    string s = "India is beautiful country";
    cout<<s.size()<<endl;

    string s2 = "I love my country";
    cout<<s2.length()<<endl;

    //push_back
    string s3 = "hello";
    cout<<s3<<endl;
    s3.push_back(' ');
    s3.push_back('A');
    s3.push_back('L');
    s3.push_back('I');
    s3.push_back('A');

    cout<<s3<<endl;

    //pop_back
    string s4 = "Homes";
    cout<<s4<<endl;
    s4.pop_back();
    cout<<s4<<endl;
    return 0;
}