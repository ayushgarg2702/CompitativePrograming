// Binary search tree
#include<bits/stdc++.h>
using namespace std;

class BalanceTree{
    public:
        int value;
        BalanceTree *lchild;
        BalanceTree *rchild;
};


BalanceTree* insert(class BalanceTree * header, int value){
    
    BalanceTree* temp = new BalanceTree;
    temp->value = value;
    temp->lchild = NULL;
    temp->rchild = NULL;
    if(!header){
        header = temp;       
    }
    else{
        if(value < header->value){
            if(!header->lchild){
                header->lchild = temp;
            }
            else{
                insert(header->lchild,value);
            }
        }
        else{
            if(!header->rchild){
                header->rchild = temp;
            }
            else{
                insert(header->rchild,value);
            }
        }
    }
    return header;
}

void show_tree(BalanceTree* header){
    if(header->lchild){
        show_tree(header->lchild);
    }
    cout<<header->value << " ";
    if(header->rchild){
        show_tree(header->rchild);
    }
}



int main(){
    class BalanceTree* header = NULL;
    header = insert(header,4);
    insert(header,9);
    insert(header,5);

    insert(header,6);
    insert(header,1);
    insert(header,8);
    insert(header,7);
    insert(header,5);
    insert(header,5);

    insert(header,3);
    insert(header,2);
    show_tree(header);

    return 0;
}