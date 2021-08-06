// rope cutting problem 
// Cut a rope in given parts in maximum picies

#include<bits/stdc++.h>
using namespace std;

int cut_rope(int rope, int a, int b, int c){
    if(rope == 0){
        return 0;
    }
    if(rope < 0)
        return -1;

    int result = 0;
    result = max(cut_rope(rope-a,a,b,c),max(cut_rope(rope-b,a,b,c),cut_rope(rope-c,a,b,c)));

    if(result == -1)
        return -1;

    return result+1;
}

int main(){
    int rope = 100;
    int a = 12;
    int b = 13;
    int c = 8;

    cout<<cut_rope(rope, a, b, c);


    return 0;
}