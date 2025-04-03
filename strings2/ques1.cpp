//remove the number of times the neighbouring character are diff from each other
#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int count =0;
    int n = s.length();
    for(int i=0;i<n;i++){
       if(n==1){
        break;   //if only single alphabet  
       }
       if(n==2 && s[0]!=s[1]){
        count=1;    //two alphabets
        break;
       }
       
       if(i==0){
        if(s[i]!=s[i+1]){  //first element whose left doesnt exist
            count++;
        }
       }
        else if (s[i]!=s[i+1] && s[i]!=s[i-1]){  //for all alphabets
         count++;
        }
        else if(i==n-1){
            if(s[i]!=s[i-1]){  //for last element whose right doesnt exist
                count++;
            }
        }
    }
    cout<<count;
    return 0;
}