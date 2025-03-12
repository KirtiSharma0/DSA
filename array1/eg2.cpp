//takeinput of array of marks of students if marksof any student is less than 35 then print its roll no. here rollno is the index number.

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of students ";
    cin>>n;

    int marks[n];  //index 0 to n-1
    cout<<"Enter marks : ";
    //input

    for(int i =0;i<=n-1;i++){
        cin>>marks[i];
    }
    
    //output
    for(int i=0;i<=n-1;i++){
        if(marks[i]<35){
            cout<<i<<" ";
        }
    }
    return 0 ;
}