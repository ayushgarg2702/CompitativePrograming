// Uniom and intersection of two sorted array
#include <bits/stdc++.h>
#include <list>
#include <iterator>
using namespace std;

int main(void){
    int arr_1[] = {1,2,3,4,5};
    int arr_2[] = {4,5,6,7,8,9};
    int size_1 = sizeof(arr_1)/sizeof(int);
    int size_2 = sizeof(arr_2)/sizeof(int);
    int i = 0, j =0; 
    list <int> union_list, intersection_list;
    for ( i, j; i < size_1 && j < size_2;){
        if(arr_1[i] == arr_2[j]){
            union_list.push_back(arr_1[i]);
            intersection_list.push_back(arr_1[i]);
            i++;
            j++;
        }
        else if(arr_1[i] > arr_2[j]){
            union_list.push_back(arr_2[j]);
            j++;
        }
        else{
            union_list.push_back(arr_1[i]);
            i++;
        }
    }
    if ( i < size_1){
        for (i; i < size_1;i++){
            union_list.push_back(arr_1[i]);
        }
    }
    if ( j < size_2){
        for ( j; j < size_2; j++){
            union_list.push_back(arr_2[j]);
        }
    }
    cout << "Intersection : " << endl;
    list <int> :: iterator it;
    for(it = intersection_list.begin(); it != intersection_list.end(); ++it)
        cout << *it << ' ';
    cout << '\n' << "Union : \n";

    list <int> :: iterator it1;
    for (it1 = union_list.begin(); it1 != union_list.end(); ++it1){
        cout << *it1 << ' ';
    }
    cout << '\n';
    return 0;
}