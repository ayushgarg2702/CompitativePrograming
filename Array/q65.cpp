// Maximum no. of guest you meet in a party
#include<bits/stdc++.h>
using namespace std;

int main(){
    int entrance[] = {1100,0500,1300,2100,0600,1300,1600};
    int exit[] = {1700,1500,1900,2400,900,1600,1900};
    int size1 = sizeof(entrance)/sizeof(int);
    int size2 = sizeof(exit)/sizeof(int);

    int res = 0;
    int count = 0;
    sort(entrance, entrance +size1);
    sort(exit,exit + size2);

    int i = 0;
    int j = 0;
    while(i < size1 && j < size2){
        if(entrance[i] <= exit[j]){
            count++;
            i++;
            res = max(res, count);
        }
        else{
            j++;
            count--;
        }
    }
    cout<<res;


    return 0;
}