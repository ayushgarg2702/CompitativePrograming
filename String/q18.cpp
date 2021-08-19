// Make two string identical by doing 3 steps only
// Insert Remove Replace

#include<bits/stdc++.h>
using namespace std;

// Wrong solution
// int PrintCount(string str1, string str2){
//     int size1 = str1.length();
//     int size2 = str2.length();

//     int ans = 0;

//     int arr1[26];
//     int arr2[26];
//     memset(arr1,0,sizeof(arr1));
//     memset(arr2,0,sizeof(arr2));

//     for(int i = 0;i < size1; i++){
//         arr1[str1[i]-'a']++;
//     }    
//     for(int i = 0;i < size2; i++){
//         arr2[str2[i]-'a']++;
//     }

//     int i = 0, j = 0;
//     while(i < size1 && j < size2){
//         if(str1[i] == str2[j]){
//             arr1[str1[i] - 'a']--;
//             arr2[str2[j] - 'a']--;
//             i++;
//             j++;
//         }
//         else{
//             if(arr1[str1[i] - 'a'] == arr2[str2[j] - 'a']){
//                 // Replace
//                 int k = i + 1;
//                 for(k = i + 1; k< size1; k++)
//                     if(str1[k] == str1[i])
//                         break;
//                 swap(str1[i],str1[k]);
//                 i++;
//                 j++;
//                 ans++;
//             }
//             else{
//                 // reduce
//                 j++;
//                 ans++;
//             }

//         }
//     }

//     return ans;
// }


// Right solution
int PrintCount(string str1, string str2, int size1, int size2){
    // int size1 = str1.length();
    // int size2 = str2.length();

    if(size1 == 0){
        return size2;
    }
    if(size2 == 0){
        return size1;
    }

    if(str1[size1-1] == str2[size2 - 1]){
        return PrintCount(str1, str2, size1-1,size2-1);
    }
    else{
        return 1 + min(PrintCount(str1, str2, size1-1,size2-1),min(PrintCount(str1, str2, size1,size2-1),PrintCount(str1, str2, size1-1,size2))) ;
    }

}


int main(){
    string str1 = "Agushar";
    string str2 = "Ayushga";
    cout<<PrintCount(str1, str2, str1.length(), str2.length());


    return 0;
}