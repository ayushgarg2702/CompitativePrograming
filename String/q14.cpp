// print all subseuence of a string
#include<bits/stdc++.h>
using namespace std;


void printSubstring(string str, string res, int count){
    int size = str.size();
    if(size == count){
        cout<<res<<" ";
        return;
    }


    // for(int i = 0; i < size;i++){
        printSubstring(str,res+str[count],count+1);
        printSubstring(str,res,count+1);
    // }

}

// ""
// a ""
// ab a  b ""
// abc ab ac a bc b c "" 
// 


int main(){
    string str = "abc";
    printSubstring(str ,"", 0);

    return 0;
}