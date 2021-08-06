// Josephus problem
// Given two intigers, first integers tells the total no. of people, and second tells the which no. to kill. Repeat this process till only one surviver left.

#include<bits/stdc++.h>
using namespace std;

int surviver(int n, int k){
    if(n==1)
        return 0; 
    return (surviver(n-1,k)+k)%n;
}


int main(){
    int n, k;
    n =7; k = 3;
    cout<<surviver(n,k);

    return 0;
}