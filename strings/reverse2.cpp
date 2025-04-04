//reverse first half of string having even length

#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n = s.length();
    reverse(s.begin(),s.end()+n/2);
    cout<<s;

    return 0;
}