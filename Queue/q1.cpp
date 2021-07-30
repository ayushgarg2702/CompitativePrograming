// Insert or print or deletion in queue (First-in-First-out)
#include<bits/stdc++.h>
using namespace std;

class Queue{
    public:
        int value;
        class Queue *next;
};

class Queue* insert(class Queue * header, int count){
    if(count <= 0){
        return header;
    }
    int a;
    if(!header){
        Queue *start = new Queue;
        cin >> a;
        start->value = a;
        start->next = NULL;
        header = start;
        count--;
    }
    Queue *start = new Queue;
    start = header;
    while(start->next){
        start = start->next;
    }
    while(count--){
        Queue *start1 = new Queue;
        cin >> a;
        start1->value = a;
        start1->next = NULL;
        start->next = start1;
        start = start->next;
    }
    return header;
}

string deletion(class Queue *&header){
    class Queue *start = new Queue;
    start = header;
    if(!start){
        return "Empty Class";
    }
    if(!start->next){
        header = NULL;
        return "delete single element";
    }
    while(start->next->next){
        start = start->next;
    }
    start->next = NULL;
    return "deletion complete";
}

string print_stack(class Queue *header){
    while(header){
        cout<<header->value<<" ";
        header = header->next;
    }
    cout<<"\n";
    return "success";
}

int main(){
    class Queue *header = NULL;
    int no;
    cout << " Enter NO. : ";
    cin >> no;
    header = insert(header,no);
    cout<< deletion(header) <<endl;
    cout<< print_stack(header);
    return 0;
}