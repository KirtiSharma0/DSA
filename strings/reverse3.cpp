//reverse index 2 to 5 and position 2 to 5
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n = s.length();
    reverse(s.begin()+2,s.end()+6);  //index 2to5
    cout<<s<<endl;

    string s2;
    cin>>s2;
    int m = s2.length();
    reverse(s2.begin()+1,s2.end()+5);  //word position 2to5
    cout<<s2;
    return 0;
}
