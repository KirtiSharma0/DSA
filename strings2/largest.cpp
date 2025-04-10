//string from 0to9 return index of having max value
#include<iostream>
using namespace std;
int main(){
    string arr[] = {"0123","0023","456","00182","940","2901"};
    int max = stoi(arr[0]);
    for(int i=1;i<=5;i++){
        int n = stoi(arr[i]);
        if(n>max){
            max = n;
        }
    }
    cout<<max;
    return 0;
}