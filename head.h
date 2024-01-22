#ifndef HEAD_H_
#define HEAD_H_
#include<iostream>
#include<cstring>

class Node{
    private:
    double number;
    public:
    Node(const double );
    Node * next;
    Node * prev;
};

class List{
    private:
    Node * head;
    Node * tail;  
    public:
    List();
    bool is_empty();
    void push_back(const double );

};

#endif