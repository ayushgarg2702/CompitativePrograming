// Check one string is rotation of another
#include<bits/stdc++.h>
using namespace std;


bool checkSubString(string str1, string str2){
    int size1 = str1.size();
    int size2 = str2.size();

    for(int i = 0; i < size1-size2;i++){
        int temp_i= i;
        for(int j = 0; j <size2; j++){
            if(str1[temp_i] == str2[j]){
                temp_i++;
            }
            else{
                break;
            }
        }
        if((temp_i-i) == size2){
            return true;
        }
    }
    return false;

}

bool checkRotation(string str1, string str2){
    int size1 = str1.size();
    int size2 = str2.size();

    if(size1 != size2){
        return false;
    }

    str1 = str1+str1;
    return checkSubString(str1, str2);
}


int main(){
    string str1 = "AyushGarg";
    string str2 = "argAyushG";

    cout<<checkRotation(str1,str2);


    return 0;
}