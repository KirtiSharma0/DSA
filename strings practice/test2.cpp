//reverse string
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cin>>s;
    
   int i=0;
   int j=s.length()-1;
   while(i<=j){
    int temp = s[i];
    s[i] = s[j];
    s[j] = temp;
    i++;
    j--;
   }
    cout<<s;

    return 0;
}