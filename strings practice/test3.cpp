//print true if string has even number of consonants and false otherwise
#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int count = 0;
    for(int i=0;i<s.length();i++){
        if(s[i]!='a'&& s[i]!='e'&& s[i]!='i'&& s[i]!='o'&& s[i]!='u'&& s[i]!='A'&& s[i]!='E'&& s[i]!='I'&& s[i]!='O'&& s[i]!='U')
        count++;
    }
    if(count%2==0) cout<<"True";
    else cout<<"false";

    return 0;
}