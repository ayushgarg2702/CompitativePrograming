// An n-bit gray code sequence is a sequence of 2n integers where:

// Every integer is in the inclusive range [0, 2n - 1],
// The first integer is 0,
// An integer appears no more than once in the sequence,
// The binary representation of every pair of adjacent integers differs by exactly one bit, and
// The binary representation of the first and last integers differs by exactly one bit.
// Given an integer n, return any valid n-bit gray code sequence.


#include <bits/stdc++.h>
using namespace std;


int main(void){
    int size;
    string f1;
    f1 = '0';
    string f2;
    f2 = '1';

    vector<string> binary_value;
    vector<string> final_binary;

    // Strings can be added at any time with push_back
    binary_value.push_back("0");
    binary_value.push_back("1");
    int index = 0;
    cout<<binary_value[0];
    cin >> size;

    for(int i = 0; i < pow(size,2); i++){
        
    }

    // vector<std::string> binary_value;
    // binary_value.push_back('kk');
    // cout<<binary_value[0];

    // cin>>size;
    
}