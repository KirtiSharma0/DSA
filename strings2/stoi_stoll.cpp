 #include<iostream>
#include<sstream>
using namespace std;
int main(){
    string str = "1234";  //convert string to int
    int x = stoi(str);
    cout<<x<<endl;
    cout<<x+1<<endl;

    //stoll() to convert in long long
    string str2 = "65634154423";
    long long x1 = stoll(str2);
    cout<<x1<<endl;
    cout<<x1+1;
    return 0;

}