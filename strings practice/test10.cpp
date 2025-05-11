//count words

#include<iostream>
using namespace std;
int main(){
    string s = "I have an exam tomorrow";
    int words = 0;
    for(int i=0;i<=s.length();i++){
       if(s[i]== ' ') words++;
    }
    cout<<words;
    return 0;
}