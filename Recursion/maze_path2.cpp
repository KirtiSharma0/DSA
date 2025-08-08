#include<iostream>
using namespace std;

int maze(int startR, int startC, int endR , int endC){
    if(startR>endR || startC>endC) return 0;   //edge case
    if(startR==endR && startC==endC) return 1; //reached

    int rightways = maze(startR , startC+1 , endR , endC);  //only col changes
    int downways = maze(startR+1 , startC , endR , endC);  //only row changes
    int totalways = rightways + downways;
    return totalways;
}

void printpath(int startR, int startC, int endR , int endC , string s){  //string s to store the path
   if(startR>endR || startC>endC) return;   //edge case
   if(startR==endR && startC==endC){
    cout<<s<<endl;
       return; //reached
   } 

    printpath(startR , startC+1 , endR , endC, s+'R');  //only col changes..right going
    printpath(startR+1 , startC , endR , endC, s+'D');  //only row changes...down going

}
int main(){
    // cout<<maze(0,0,2,2); //startR, startC , endR , endC
    printpath(1,1,3,3,"");
}