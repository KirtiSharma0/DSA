//given array of marks of students if marksof any student is less than 35 then print its roll no. here rollno is the index number.

#include<iostream>
using namespace std;
int main(){
    int marks[7] = {13,55,38,67,23,66,31};
    for(int i=0;i<=6;i++){
        if(marks[i]<35){
            cout<<"Rollno. having less than 35marks is "<<i<<endl;
        }
    }
     return 0;
}