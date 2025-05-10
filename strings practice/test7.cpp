//strings having number, give the sum of string array
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<string> s = {"4","7","28","2"};
    int sum = 0;
    for(int i=0;i<s.size();i++){
        int n;
        n = stoi(s[i]);
        sum = sum+n;
    }
    cout<<sum;
    return 0;
}