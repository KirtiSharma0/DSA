//product the sum of two strings ASCII values
//s1 = sum1 of ascii and s2 = sum2 of ascii
//product = sum1 * sum2;

#include<iostream>
using namespace std;
int main(){
    string s1;
    cin>>s1;

    cout<<endl;

    string s2;
    cin>>s2;

    int sum1=0 , sum2=0;
    for(int i=0;i<s1.length();i++){
        int a = (int)s1[i];
        sum1 = sum1 + a;
    }
    for(int i=0;i<s2.length();i++){
        int b = (int)s2[i];
        sum2 = sum2 + b;
    }

    int product = 1;
    product = sum1 * sum2;
    cout<<product;

    return 0;

}