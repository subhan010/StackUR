
#include "stack.h"
#include <stdlib.h>



Stack * initialize_stack()
{
 Stack * mystack;
 mystack=(Stack *)malloc(sizeof(Stack));
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
    snode=getsnode(node,ops);
    if(stack->s_length==0)
    {
        stack->start=snode;
    }
    stack->s_length++;
    stack->top->ptr=snode;
    stack->top=snode;

    return 0;

   
}
Snode * pop(Stack * stack, int ops)
{
    Snode *snode;
    Snode *temp;

    for(snode=stack->start;snode->ptr!=NULL;snode=snode->ptr);
    temp=stack->top;
    stack->top=snode;

    return temp;
     
    

}













