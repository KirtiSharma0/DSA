//sorting will give alphabetical order
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    cout<<s<<endl;

    string s1;
    getline (cin,s1); //for space in strings
    sort(s1.begin(),s1.end());
    cout<<s1;

    return 0;
}