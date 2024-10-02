#include "header.h"
#include <stdlib.h>
#include <stdio.h>
#include "stack.h"



List * initialize_list()
{
    List * mylist;
    mylist=(List*)malloc(sizeof(List));
    mylist->count=0;
    mylist->head=mylist->tail=NULL;
    return mylist;
}

Node * getnode(int data)
{
    Node * node;
    node=(Node *)malloc(sizeof(Node));
    node->data=data;
    node->ptr=NULL;

    return node;
}

int insert_begin(List * mylist, int data )
{
    Node * node;

    node= getnode(data);
   
    
      printf("%d ",node);
    
    
    if (mylist->count==0)
    {
        
        mylist->head=mylist->tail=node;
    }
    else
    {
       node->ptr=mylist->head;
       mylist->head=node;  
    }
    mylist->count++;

    return 0;
}
int insert_end(List * mylist, int data)
{
    Node * node;
     

    
    node= getnode(data);
    
    

     if (mylist->count==0)
    {
        
        mylist->head=mylist->tail=node;
    }
    else
    {
        mylist->tail->ptr=node;
        mylist->tail=node;
    }
    mylist->count++;
    return 0;

}
int delete_begin(List * mylist)
{
    Node * temp;
     temp=mylist->head;
     mylist->head=mylist->head->ptr;
     //free(temp);
     push(undo,temp,1);
     mylist->count--;
     return 0;
}
int delete_end(List * mylist)
{
    Node *temp;
    
    for(temp=mylist->head;temp->ptr!=mylist->tail;temp=temp->ptr);
   
   
   //free(mylist->tail);
   
   
    mylist->tail=temp;
    temp->ptr=NULL;
    
    mylist->count--;
    return 0;

   
}
int insert_at_pos(List * mylist, int pos, int data)
{
    Node *temp;
    Node *temp1;
    
    temp1=getnode(data);
    int cur;
    
    
    if(pos==0)
    {
        insert_begin(mylist,data);
    }
    else if(pos==mylist->count)
    {
         
        insert_end(mylist, data);
    }
    else
    {
        for(temp=mylist->head,cur=0;cur<pos-1 && temp!=NULL; cur++,temp=temp->ptr);
      
    temp1->ptr=temp->ptr;
    temp->ptr=temp1;

    }
    mylist->count++;

    return 0;

}
int delete_at_pos(List * mylist, int pos)
{

    Node *temp;
    Node *temp1;
    if(pos==0)
    {
        delete_begin(mylist);
    }
    else if(pos==mylist->count)
    {
        delete_end(mylist);

    }
    else
    {
        int cur;
         for(temp=mylist->head,cur=0;cur<pos-1 && temp!=NULL; cur++,temp=temp->ptr);
       
         temp1=temp->ptr;
         temp->ptr=temp->ptr->ptr;
         //free(temp1);
        
         

    }
    mylist->count--;
    return 0;

}

void display(List * mylist)
{
    Node * temp;

    for(temp=mylist->head;temp!=NULL;temp=temp->ptr)
    {
        printf("%d ->",temp->data);
        
    }
    printf("\n");
}