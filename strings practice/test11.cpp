//print largest number of letter of word
#include<iostream>
using namespace std;
int main(){
    string s = "I got full marks in computer";
    int ans = 0;
    for(int i=0;i<=s.length();i++){
        int letter = 0;
        while(i<(s.length()-1) && s[i]!= ' ' ){
            letter++;
            i++;
        }
        if(ans<letter) ans = letter;
    }
    cout<<ans;
    return 0;
}