// Create tree, insert data
#include<bits/stdc++.h>
using namespace std;


class Tree{
    public:
        int value;
        class Tree *lchild;
        class Tree *rchild;
};

class Queue{
    public:
        class Tree* value;
        class Queue* next;
};

class Queue* insertqueue(class Queue *header, class Tree* value){
    Queue *obj = new Queue;
    obj->value = value;
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
class Tree* insert(class Tree *Header, class Queue* &QHeader, int count){
    int a;
    if(count <= 0){
        return Header;
    }
    Tree *obj = new Tree;
    cin >> a;
    obj -> value = a;
    obj -> lchild = NULL;
    obj -> rchild = NULL;
    
    if(!QHeader){
        Header = obj;
        QHeader = insertqueue(QHeader, obj);
        count--;
    }

    while(count--){
        Tree *obj = new Tree;
        cin >> a;
        obj -> value = a;
        obj -> lchild = NULL;
        obj -> rchild = NULL;
            
         if(!QHeader->value->lchild){
            QHeader->value->lchild = obj;
            QHeader = insertqueue(QHeader, QHeader->value->lchild);
         }   
         else{
            QHeader->value->rchild = obj;
            QHeader = insertqueue(QHeader, QHeader->value->rchild);
            QHeader= QHeader->next;
         }
    }
    

    return Header;
}
void printTree(class Tree* header){
    if(!header){
        return;
    }
    cout<<header->value<< " ";
    printTree(header->lchild);
    printTree(header->rchild);

}

int main(){
    class Tree *THeader;
    THeader = NULL;
    // THeader->value = 1;
    class Queue *QHeader;
    QHeader = NULL;
    // QHeader = insertqueue(QHeader, THeader);

    // while(QHeader){
    //     cout<<QHeader->value<<" ";
    //     QHeader = QHeader -> next; 
    // }

    THeader = insert(THeader,QHeader,15);

    // cout<<THeader->value;
    printTree(THeader);

    return 0;
}