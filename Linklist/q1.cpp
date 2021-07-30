// Create link list and print element
#include<bits/stdc++.h>
using namespace std;

class Linklist{
    public:
        int value;
        class Linklist *next;
};

class Linklist* CreteLinklist(class Linklist *header, int count){
    int a;
    Linklist *val = new Linklist;
    if(count == 0){
        return header;
    }
    if(!header){
        cin >> a;
        val->value = a;
        val->next = NULL;
        header = val;
        count--;
        // cout<<"b";
    }
    Linklist *start=header;
    header = start;
    while(start->next){
        start = start->next;
    }
    while(count--){
        class Linklist *val1 = new Linklist;
        cin>> a;
        val1->value = a;
        val1->next = NULL;
        start->next = val1;
        start = start->next;
        // cout<<"a";
    }
    return header;

}


int main(){
    class Linklist *header = NULL;
    header = CreteLinklist(header, 2);
    header = CreteLinklist(header, 2);

    while(header!= NULL){
        cout<<header->value << " "  <<"\n";
        header = header->next;
    }

    return 0;
}