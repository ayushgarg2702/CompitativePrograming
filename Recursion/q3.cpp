// Tower of hanoi

#include<bits/stdc++.h>
using namespace std;

void TOH(int t, char a, char b ,char c){
    if(t == 1){
        cout<<a<<"->"<<c<<endl;
        return;
    }
    TOH(t-1,a,c,b);
    cout<<a<<"->"<<c<<endl;
    TOH(t-1,b,a,c);
}


int main(){
    TOH(3,'A','B','C');

    return 0;
}