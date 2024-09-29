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
int insert_begin(List *,int );
int insert_end(List *,int );
int delete_begin(List * );
int delete_end(List * );
int insert_at_pos(List *, int, int);
int delete_at_pos(List *, int);
void display(List *);