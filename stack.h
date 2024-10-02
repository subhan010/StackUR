
#ifndef STACK_H
#define STACK_H



struct _node_;
typedef struct _node_ Node;


struct _stacknode_
{
   int ops;
   Node * data;
   struct _stacknode_ * ptr;
};
typedef struct _stacknode_ Snode;

struct _stack_
{
   int s_length;
   Snode * start;
   Snode * top;

};
typedef struct _stack_ Stack;

Stack * initialize_stack();
int push(Stack *, Node *, int);
Snode * pop(Stack *, int );
void traverse(Stack * );

#include "header.h"

#endif
