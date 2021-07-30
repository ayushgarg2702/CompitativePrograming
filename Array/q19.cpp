// Find common element in 3 sorted array
//  g++ -std=c++0x q19.cpp compile it with this due g++ library not direct support unordered_map
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;

int main(void){
    int arr1[] = {1,2,3,4,14,15};
    int arr2[] = {3,4,5,10,11,12,15};
    int arr3[] = {3,4,15,16};
    int size1 = sizeof(arr1)/sizeof(int);
    int size2 = sizeof(arr2)/sizeof(int);
    int size3 = sizeof(arr3)/sizeof(int);
    int sizec = min(min(size1,size2),size3);
    int *common =new int[sizec];
    unordered_map<int, int> m;

    for(int i = 0; i < size1;i++)
        m[arr1[i]]++;
    for(int i = 0; i < size2;i++)
        m[arr2[i]]++;
    for(int i = 0; i < size3;i++)
        m[arr3[i]]++;

    for(int i=0;i<m.size();i++){
        if(m[i] % 3 == 0)
            for(int j = 0; j < m[i]/3;j++)
                cout<<i<< " ";
    }
    return 0;
}