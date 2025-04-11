#include<iostream>
using namespace std;
int main(){
    string s = "general";
    cout<<s<<endl;
    int sum=0;

    for(int i=0;i<s.length();i++){
       int a = (int)s[i];
       sum = sum + a;
    }
    cout<<sum;
    return 0;
}