// adding two binary no. and print result in binary format
#include<bits/stdc++.h> 
using namespace std; 

string addBinary(string a, string b) 
{ 
    int c =0;
    string result="";
    if(a.size()>b.size()){
        result = a;
    }
    else{
        result = b;
    }
    int i,j;
    for( i = a.size()-1, j = b.size()-1; i>=0&&j>=0;i--,j--){
        if(a[i]=='1' && b[j] == '1'){
            if(c == 1){
                result[i] = char(1);
            }
            else{
                c = 1;
                result[i]='0';
            }
        }
        else if(a[i]=='0' && b[j] == '0'){
            if(c == 1){
                result[i] = '1';
                c =0;
            }
            else{
                result[i]='0';
                // cout<<i<<j;
            }
        }
        else{
            if(c == 1){
                result[i] = '0';
                c =1;
            }
            else{
                result[i]='1';
            }
            
        }
        // cout<<"c "<<a[i]<<" "<<b[j]<<"\n";
    }
    i = max(i,j);
    // cout<<c<<"c ";
    if(c){
        if(i<result.size()){
            for(j = i; j>=0;j--){
                if(result[j] =='1'){
                    result[j] = '0';
                }
                else{
                    result[j] = '1';
                    break;
                }
            }
        }
        if(j==-1){
            result= '1'+result;
        }
    }
    // cout<<result.size();
    return result;
} 

int main() 
{ 
    string a, b;
    getline(cin, a);
    getline(cin, b); 
	cout << addBinary(a, b) << endl; 
	return 0; 
} 