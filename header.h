
#ifndef HEADER_H
#define HEADER_H



struct _stack_;

typedef struct _stack_ Stack;

struct _node_
{
    int data;
    struct _node_ * ptr;

};
typedef struct _node_ Node;

struct _linkedlist_
{
    int count;
    Node * head;
    Node * tail;
};
typedef struct _linkedlist_ List;

List * initialize_list();

int insert_begin(List *,int );//1
int delete_begin(List * );//2
int insert_end(List *,int );//3
int delete_end(List * );//4
int insert_at_pos(List *, int, int);//5
int delete_at_pos(List *, int);//6
void display(List *);

#include "stack.h"

#endif