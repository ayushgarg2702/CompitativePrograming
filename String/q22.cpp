// Convert a sentence into its equivalent mobile numeric keypad sequence
#include<bits/stdc++.h>
using namespace std;

int main(){
    map<char,int> number;
    map<char,int> n_time;
    string str = "ayush garg";
    string ans = "";

    number['a'] = 2;
    number['b'] = 2;
    number['c'] = 2;
    number['d'] = 3;
    number['e'] = 3;
    number['f'] = 3;
    number['g'] = 4;
    number['h'] = 4;
    number['i'] = 4;
    number['j'] = 5;
    number['k'] = 5;
    number['l'] = 5;
    number['m'] = 6;
    number['n'] = 6;
    number['o'] = 6;
    number['p'] = 7;
    number['q'] = 7;
    number['r'] = 7;
    number['s'] = 7;
    number['t'] = 8;
    number['u'] = 8;
    number['v'] = 8;
    number['w'] = 9;
    number['x'] = 9;
    number['y'] = 9;
    number['z'] = 9;
    number[' '] = 0;

    n_time['a'] = 1;
    n_time['b'] = 2;
    n_time['c'] = 3;
    n_time['d'] = 1;
    n_time['e'] = 2;
    n_time['f'] = 3;
    n_time['g'] = 1;
    n_time['h'] = 2;
    n_time['i'] = 3;
    n_time['j'] = 1;
    n_time['k'] = 2;
    n_time['l'] = 3;
    n_time['m'] = 1;
    n_time['n'] = 2;
    n_time['o'] = 3;
    n_time['p'] = 1;
    n_time['q'] = 2;
    n_time['r'] = 3;
    n_time['s'] = 4;
    n_time['t'] = 1;
    n_time['u'] = 2;
    n_time['v'] = 3;
    n_time['w'] = 1;
    n_time['x'] = 2;
    n_time['y'] = 3;
    n_time['z'] = 4;
    n_time[' '] = 1;


    for(int i = 0; i< str.size(); i++){
        for(int j = 0; j < n_time[str[i]]; j++){
            ans += to_string(number[str[i]]);
        }
    }

    cout<<ans;

    return 0;
}