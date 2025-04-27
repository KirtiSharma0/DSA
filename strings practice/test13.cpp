//string "kirti"  ch = 'i'  op = 2 
//count the occurence of character in string

#include<iostream>
using namespace std;
int main(){
    string s = "general";
    char ch = 'i';
    int count=0;
    for(int i=0;i<s.length();i++){
        if(s[i]==ch) count++;
    }
    cout<<count;
    return 0;
}