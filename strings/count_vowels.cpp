//input string of length n and count vowels

#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    cout<<"string is = "<<s<<endl;
    int count=0;

    for(int i=0;i<s.length();i++){
        if(s[i]=='a' ||s[i]=='e' ||s[i]=='i' ||s[i]=='o' ||s[i]=='u'){
            count++;
        }
    }
    cout<<count;
    return 0;

}