// Distinct same element in two differnet array
#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr1[] = {1,2,5,3,2,4,5};
    int arr2[] = {2,5,9,8,7};

    int size1 = sizeof(arr1) / sizeof(int);
    int size2 = sizeof(arr2) / sizeof(int);

    set<int> s_arr1(arr1,arr1+size1);
    set<int> s_arr2(arr2,arr2+size2);
    int ans = 0;
    set<int>::iterator itr;
    for(itr = s_arr1.begin();itr != s_arr1.end(); itr++){
        if(s_arr2.find(*itr) != s_arr2.end())
            ans++;
    }

    cout<<ans;



    return 0;
}