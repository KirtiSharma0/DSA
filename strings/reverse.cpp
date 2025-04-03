#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string s = "Kirti";
    cout<<s<<endl;
    reverse(s.begin(),s.end());
    cout<<s<<endl;

    //reverse part
    string s2 = "abcdefgh";
    cout<<s2<<endl;
    reverse(s2.begin()+4,s2.end()); //after four words
    cout<<s2<<endl;

    string s3 = "abcdef";
    cout<<s3<<endl;
    reverse(s3.begin()+2,s3.end()-1);
    cout<<s3<<endl;
    return 0;
}