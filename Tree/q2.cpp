// n - Chlid tree or Generic tree or n-array tree
// Construction and insertion of data in n-array tree

#include<bits/stdc++.h>
using namespace std;

class NarrayTree{
    public:
        int value;
        int no_child;
        vector<NarrayTree*> child;
};

class Queue{
    public:
        class NarrayTree* value;
        int child;
        class Queue* next;
};

class Queue* insertqueue(class Queue *header, class NarrayTree* value, string str, int child){
    Queue *obj = new Queue;
    obj->value = value;
    // strcpy(obj->str,str);
    obj->child = child;
    obj->next = NULL;
    if(!header){
        header = obj;
    }
    else{
        Queue *obj1 = new Queue;
        obj1 = header;
        while(obj1->next){
            obj1 = obj1->next;
        }
        obj1->next = obj;
        obj1 = obj1->next;

    }
    return header;
}

class NarrayTree* insert(class NarrayTree* base_node, class Queue* &header,int count){
    int a;
    int child;
    if(!base_node){
        cout<<"Enter value for Base node";
        cin >> a >> child;
        NarrayTree *temp = new NarrayTree;
        temp->value = a;
        temp->no_child = child;
        base_node = temp;
        header = insertqueue(header, base_node, "base node",child);
        count--;
    }

    while(count){
        cin >> a >> child;
        NarrayTree *temp = new NarrayTree;
        temp->value = a;
        temp->no_child = child;
        int child = header->child;

        // cout<<"\na "<<child;
        // cout<<" "<<header->value<<" "<<header->child;
        header->value->child.push_back(temp);
        header = insertqueue(header, header->value->child[header->value->no_child - child], "base node",child);
        child--;
        count--;
        
        header->child= child;
        if(child <= 0){
            header = header->next;
        }
    }

    return base_node;
}

int main(){
    NarrayTree *base_node = NULL;
    Queue *header;
    base_node = insert(base_node, header, 3);
    cout<<"\n\n"<<base_node->child[0]->value<<" ";

    cout<<base_node->child[0]->child[0]->value;


    return 0;
}

