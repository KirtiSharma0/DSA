#include <iostream>
using namespace std;
  
  int main(){
    char ch;
    cin>>ch;
     if(ch=='a' || ch=='b'|| ch=='c'){
        cout<<"LOWER CASE";
     }
     else if (ch=='A' || ch=='B'|| ch=='C'){
       cout<<"UPPER CASE";
     }
     else if (ch=='1' || ch=='2'|| ch=='3'){
        cout<<"NUMERIC VALUE";
     }

     return 0;
  }

