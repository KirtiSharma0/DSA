//update all even position of string to character 'a'

#include<iostream>
using namespace std;
int main(){
    string s = "VINAYAK";
    cout<<s<<endl;

    //traverse
    for(int i=0;i<s.length();i++){
        if(i%2==0){
            s[i] = 'A';
        }
    }
    cout<<s;
    return 0;
}