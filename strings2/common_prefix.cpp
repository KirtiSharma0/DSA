//find longest common prefix string of all the strings leetc14
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<string>v;
    int n=v.size();
    v.push_back("flower");
    v.push_back("flat");
    v.push_back("flight");
    v.push_back("flow");
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    cout<<endl;

    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    string first=v[0];
    string last=v[n-1];
    string ans;
    string emp="";
    for(int i=0;i<(min(first.size(),last.size()));i++){
        if(first[i]==last[i]){
            ans = ans+first;
        }
        else cout<<emp;
    }
    cout<<ans;
    return 0;
}