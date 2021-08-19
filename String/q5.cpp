// Patter matching Naive
#include<bits/stdc++.h>
using namespace std;

bool patternMatching(string str, string pattern){
    if(str.size() < pattern.size()){
        return false;
    }
    int j;
    for(int i = 0; i < str.size() - pattern.size(); i++){
        int temp_i = i;
        for(j = 0; j < pattern.size(); j++){
            if(str[temp_i] != pattern[j]){
                goto AfterTheLoop;
            }
            temp_i++;
        }
        if(j == pattern.size())
            return true;

        AfterTheLoop:
        ;
    }
    return false;
}


int main(){
    string str = "AyushGargIsSmartThatIsNotTrue";
    string pattern1 = "Smart";
    string pattern2 = "NotFound";

    cout<<"First : "<<patternMatching(str, pattern1);
    cout<<"\nSecond : "<<patternMatching(str, pattern2);




    return 0;
}
