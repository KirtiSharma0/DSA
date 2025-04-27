//print yes if string is palindrome
#include<iostream>
using namespace std;
#include<algorithm>
int main(){
    string s;
    cin>>s;
    string copy = s;
    reverse(copy.begin(),copy.end());
         
    if(s==copy) cout<<"yes";
    else cout<<"NO";

    return 0;

}