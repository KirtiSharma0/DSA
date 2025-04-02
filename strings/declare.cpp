#include<iostream>
#include<string>
using namespace std;
int main(){
    string s = "kirti";
    cout<<s<<endl;

    //also print character at given index value
    cout<<s[0]<<endl;

    //input string single word
    string name;
    cin>>name;
    cout<<"Name = "<<name<<endl;

    //input string multiple word
    string F;
    getline(cin,F);
    cout<<"Full Name = "<<F<<endl;

    return 0;
}