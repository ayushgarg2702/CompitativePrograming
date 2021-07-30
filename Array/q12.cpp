// Merge two sorted array without using extra space
// Divide and modulo rule
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    void merge(int arr_1[],int arr_2[], int size1, int size2){
        int temp,j = 0;
        for(int j = 0;j < size2;j++){
            for(int i = 0; i < size1;i++){
                if(arr_1[i]>arr_2[j]){
                    temp = arr_1[i];
                    arr_1[i] = arr_2[j];
                    arr_2[j] = temp;
                }
            }
        }
        sort(arr_2,arr_2+size2);
    }
    int mergein_NPLusM(int arr_1[],int arr_2[], int size1, int size2){
        int mx = 0;
        int i = 0, j = 0,k=0;
        for (int i = 0; i < size1; i++){
            mx = max(mx,arr_1[i]);
        }
        for (int i = 0; i < size2; i++){
            mx = max(mx,arr_2[i]);
        }
        mx++;
        for(i = 0, j = 0,k=0; (i < size1) && (j <size2) && k < (size1+size2);){
            if (arr_1[i]%mx > arr_2[j]%mx){
                if(k < size1)
                    arr_1[k] += (arr_2[j]%mx)*mx;
                else
                    arr_2[k-size1] += (arr_2[j]%mx)*mx;
                k++;
                // cout << "a ";
                j++;  
            }
            else if(arr_1[i]%mx < arr_2[j]%mx){
                if(k < size1)
                    arr_1[k] += (arr_1[i]%mx)*mx;
                else
                    arr_2[k-size1] += (arr_1[i]%mx)*mx;
                // arr_2[j] += arr_1[i]*mx;
                // cout << "b ";
                k++;
                i++; 
            }
            else{
                if(k < size1)
                    arr_1[k] += (arr_2[j]%mx)*mx;
                else
                    arr_2[k-size1] += (arr_2[j]%mx)*mx;
                // arr_1[i] += arr_2[i]*mx;
                // cout <<"c ";
                k++;
                i++;
            }
        }
        if(k<(size1+size2)){
            for(i;i<size1;i++){
                if(k < size1)
                    arr_1[k] += (arr_1[i]%mx)*mx;
                else
                    arr_2[k-size1] += (arr_1[i]%mx)*mx; 
                k++; 
            }
            for(j;j<size2;j++){
                if(k < size1)
                    arr_1[k] += (arr_2[j]%mx)*mx;
                else
                    arr_2[k-size1] += (arr_2[j]%mx)*mx; 
                k++; 
            }
        }
        return mx;
    }
};

int main(void){
    int arr_1[] = {0,2,3,4,6,8};
    int arr_2[] = {1,3,5,6,7,9};
    int size1 = sizeof(arr_1)/sizeof(int);
    int size2 = sizeof(arr_2)/sizeof(int);
    Solution obj;
    obj.merge(arr_1,arr_2,size1,size2);

    for(int i = 0; i < size1; i++){
        cout<<arr_1[i] << " ";
    }
    for(int i = 0; i < size2; i++){
        cout << arr_2[i] << " ";
    }


    // Another method
    // int arr_11[] = {0,2,3,4,6,8};
    // int arr_22[] = {1,3,5,6,7,9};
    // int size1 = sizeof(arr_11)/sizeof(int);
    // int size2 = sizeof(arr_22)/sizeof(int);
    // int mx = obj.mergein_NPLusM(arr_11,arr_22,size1,size2);

    // for(int i = 0; i < size1; i++){
    //     cout<<arr_11[i]/mx << " ";
    // }
    // for(int i = 0; i < size2; i++){
    //     cout << arr_22[i]/mx << " ";
    // }

    return 0;
}