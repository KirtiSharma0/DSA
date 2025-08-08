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
int main(){
    cout<<maze(0,0,2,2); //startR, startC , endR , endC
}