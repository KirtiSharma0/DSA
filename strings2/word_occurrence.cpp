//given a sentence and return most ocuuring word 

#include<iostream>
#include<sstream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    string str = "I study maths . maths includes many formulas. maths is tough. maths is problem solving";
    stringstream ss(str);
    string temp;
    vector<string>v;
    while(ss>>temp){
        v.push_back(temp);
    }

    //same words will came together
    sort(v.begin(),v.end());
    // for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<endl;
    // }
    int maxword=1;
    int count=1;

    for(int i=0;i<v.size();i++){
       if(v[i]==v[i-1]) count++;
       else count=1;
       maxword = max(maxword,count);
    }
    cout<<maxword;
    
    //printing word
    count=1;
    for(int i=0;i<v.size();i++){
        if(v[i]==v[i-1]) count++;
        else count=1;
        if(count==maxword){
            cout<<v[i]<<" " <<maxword<<endl;
        }
     }
    return 0;
}