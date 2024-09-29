
#ifndef STACK_H
#define STACK_H

#include "header.h"


struct _stacknode_
{
   int ops;
   Node * data;
   struct _stacknode_ * ptr;
};
typedef _stacknode_ Snode;

struct _stack_
{
   int s_length;
   Snode * start;
   Snode * top;

};
typedef _stack_ Stack;

Stack * initialize_stack();
int push(Stack *, Node *, int);
Snode * pop(Stack *, int );

#endif
