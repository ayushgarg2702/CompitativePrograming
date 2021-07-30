// Create stack, insert, show, delete
#include<bits/stdc++.h>
using namespace std;

class Stack{
    public:
        int value;
        class Stack *next;
};
class Stack * insert(class Stack * header, int count){
    Stack *top = new Stack;
    top = header;
    while(count--){
        Stack *start = new Stack;
        int a;
        cin >> a;
        start->value = a;
        start->next = top;
        top = start;
    }
    header = top;
    return header;
}

int main(){
    class Stack *header = NULL;
    header = insert(header,3);

    // For deletion
    header = header->next;

    
    while(header){
        cout<<header->value;
        header = header->next;
    }

    return 0;
}