#ifndef QX_LIST_H
#define QX_LIST_H

struct node{
    int value;
    node* next=nullptr;
};

class List{
private:
    node* header;

public: 
    List();                         //O(1)
    ~List();                        //O(n)
    bool isEmpty();                 //O(1)
    void push(int x);               //O(n)
public: /////////////////////////////////////////
    void print();                   //O(n)
    int size();
    void removeAt(int index,int i=0);       //O(n)
};



#endif