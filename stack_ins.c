#include "stack.h"
#include <stdlib.h>
#include <stdio.h>


Stack * initialize_stack()
{
 Stack * mystack;
 
 mystack=(Stack *)malloc(sizeof(Stack));
 mystack->s_length=0;
 mystack->top=NULL;
 mystack->start=NULL;
 return mystack;
    
}
Snode * getsnode(Node * node, int ops)
{
    Snode * snode;
    snode=(Snode *)malloc(sizeof(Snode));
    snode->data=node;
    snode->ptr=NULL;


}

int push(Stack * stack,Node * node, int ops)
{
    Snode * snode;
   
     printf("hello\n");
    
    snode=getsnode(node,ops);
     
    
    if(stack->s_length==0)
    {
        printf("hello\n");
        stack->start=stack->top=snode;
         printf("%d ",stack->top->data->data);
    }
    else
    {
      stack->top->ptr=snode;
    stack->top=snode;
    }
    stack->s_length++;

    return 1;

   
}
Snode * pop(Stack * stack, int ops)
{
    Snode *snode;
    Snode *temp;

    for(snode=stack->start;snode->ptr!=NULL;snode=snode->ptr);
    temp=stack->top;
    stack->top=snode;
    stack->s_length--;
    return temp;
     
    

}

void traverse(Stack * stack)
{
    Snode *snode;

    for(snode=stack->start;snode!=NULL;snode=snode->ptr)
    {
        printf("%d ",snode->data->data);
    }
}

void undo(List * list, Stack * stack)
{

    switch(stack->top->ops)
    {
      case 1:
      insert_begin(list,stack,stack->top->data->data);
      break;
      case 2:
      delete_begin(list,stack)
      break;
      case 3:
      break;
      case 4:
      break;
      case 5:
      break;
      case 6:
      break;

    }


}













