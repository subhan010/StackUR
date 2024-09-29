#include <stdio.h>
#include "header.h"
#include <assert.h>

int main()
{
    List * mylist;
    mylist=initialize_list();

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

    return 0;

   
}