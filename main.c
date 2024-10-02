#include <stdio.h>
#include "header.h"
#include <assert.h>
#include "stack.h"

int main()
{
    List * mylist;
    Stack * undo;
    mylist=initialize_list();
    undo=initialize_stack();


    assert(insert_begin(mylist,4)==0);
    assert(insert_begin(mylist,3)==0);
    assert(insert_begin(mylist,2)==0);
    
    assert(insert_end(mylist,5)==0);
   
    assert(insert_end(mylist,6)==0);
    assert(insert_end(mylist,7)==0);
    display(mylist);

    assert(delete_begin(mylist)==0);
       
    assert(delete_end(mylist)==0);
     display(mylist);
    assert(insert_at_pos(mylist,2,100)==0);
     display(mylist);
     assert(delete_at_pos(mylist,2)==0);
     display(mylist);
    traverse(undo);

    return 0;

   
}