//to pick up string separately by ignoring spaces 
#include<iostream>
#include<sstream>
using namespace std;
int main(){
    string str = "kirti is good girl   she is sweet";
    stringstream ss (str);
    string temp;

    while(ss>>temp){
        cout<<temp<<endl;
    }
    return 0;
}