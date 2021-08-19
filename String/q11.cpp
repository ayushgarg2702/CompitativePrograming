// Check if a string is a valid shuffle of two other strings
#include<bits/stdc++.h>
using namespace std;

bool checkSuffle(string str1, string str2, string shuffle){
    if((str1.size() + str2.size()) != shuffle.size()){
        return false;
    }

    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());
    sort(shuffle.begin(), shuffle.end());
    int k = 0;
    int i = 0;
    int j = 0;
    while(k < shuffle.size()){
        if(str1[i] == shuffle[k] && i < str1.size()){
            i++;
        }
        else if(str2[j] == shuffle[k] && j < str2.size()){
            j++;
        }
        else{return false;}
        k++;
    }

    return true;

}

int main(){
    string str1 = "DABC";
    string str2 = "312";
    string shuffle = "A1B3CD2";

    cout<< checkSuffle(str1, str2, shuffle);

    return 0;
}