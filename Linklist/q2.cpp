// circular linklist with two pointers reverse and forward.
// write a code that take input array of intigers and an key. And update the arry elemnt with forwward or backward by adding key of array value in it according to the given key.

#include<bits/stdc++.h>
using namespace std;

class ll{
    public:
    int value;
    ll *next;
    ll *pre;
};

ll* insert(ll *header, int val){
    if(header == NULL){
        ll *temp = new ll();
        temp->value = val;
        temp->next = NULL;
        temp->pre = header;
        header = temp;
        header->next = header;
        header->pre = header;
    }
    else{
        ll *start;
        start = header;
        while(start->next!=header)
            start = start->next;
        
        ll *temp = new ll();
        temp->value=val;
        temp->next = header;
        temp->pre= start;
        start->next= temp;
        header->pre = start->next;
        
    }
    return header;

}

void print_ll(ll * header){
    ll *temp = header;
    if(temp){
        cout<<temp->value<<" ";
        temp = temp->next;
    }
    while(temp != header){
        cout<<temp->value<<" ";
        temp = temp->next;
    }
    cout<<endl;

}


int main(){
    ll *header;
    int key, count;
    int value = 0;
    header = NULL;
    key= 3;
    count = 6;
    header = insert(header,1);


    header = insert(header,2);
    header = insert(header,3);
    header = insert(header,4);
    header = insert(header,5);
    header = insert(header,6);


    // cout<<header->value;
    // cout<<header->pre->value;
    // cout<<header->next->value;
    // print_ll(header);
    print_ll(header);

    ll *header2;
    ll *temp = header;
    for(int i = 0;i<count;i++){
        value = temp->value;
        ll *temp2 = temp;
        for(int j= 0; j!=key;){
            if(key>0){
                temp2 = temp2->next;
                j++;
            }
            else{
                temp2 = temp2->pre;
                j--;
            }
            value+=temp2->value;
        }
        header2 = insert(header2,value);
        temp = temp->next;

    }

    print_ll(header2);

    return 0;
}