#include<iostream>
using namespace std;
int main(){
    char ch1 = 'V';
    cout<<(int)ch1<<endl;
    
    char ch2 = 't';
    cout<<(int)ch2<<endl;

    char str[] = {'e','G','p','W','s'};
    cout<<str[1]<<(int)str[1]<<endl;
    cout<<str[3]<<(int)str[3]<<endl;

    for(int i=0;i<5;i++){
        cout<<(int)str[i]<<" ";
    }
    return 0;
}