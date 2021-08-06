// Two odd one from a list of array
#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1,1,2,2,4,5,7,8,5,8,9,4};
    int size = sizeof(arr)/sizeof(int);
    int ans1= arr[0];
    for(int i = 1; i<size;i++){
        ans1= ans1 ^ arr[i];
    }


    unsigned int b = ((ans1&-ans1));
    b = log2(b) +1;
    vector<int> f1,f2;
    for(int i=0; i< size; i++){
        if((arr[i]>>(b))&1)
            f1.push_back(arr[i]);
        else
            f2.push_back(arr[i]);

    }

    vector<int>::iterator itr;
    int a1,a2;
    a1 = 0;
    for(itr = f1.begin();itr!=f1.end();itr++){
        a1 = a1 ^(*itr);
        // cout<<"a"<<*itr<<" ";
    }

    // cout<<endl;
    a2 = 0;
    for(itr = f2.begin();itr!=f2.end();itr++){
        a2 = a2 ^(*itr);
        // cout<<"B"<<*itr<<" ";
        
    }

    cout<<a1<<" "<<a2;
    return 0;
}