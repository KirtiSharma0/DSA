//string given, print longest word
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<string>s = {"i love mango","i love pineapple"};
    int ans = 0; 
    for(int i=0;i<s.size();i++){   //array
        
    int count = 0;
        for(int j=0;j<s[i].length();j++){  //first index string traverse
            string temp ; 

            while(s[i][j] != ' '){ 
                 temp.push_back(s[i][j]);
                   count++;
            }
        }
        if(ans<count){
            ans = count;
        }
    }
   cout<<ans;
   return 0; 
}