#include<stdio.h>
#include<stdlib.h>


typedef struct listnode{
    struct listnode* next;    //Pointer to the next node of type listnode
    int value;
}Node;

static Node* Node_construct(int val){
    Node* nd = malloc(sizeof(Node));
    nd->value = val;
    nd->next = NULL;
    return nd;
}

Node* List_insert(Node* head, int val){
    printf("Insert %d\n", val);
    Node* ptr = Node_construct(val);
    ptr->next = head;
    return ptr;
}

Node* List_search(Node* head, int val){
    Node* ptr = head;
    while(ptr != NULL){
        if(ptr->value == val){
            return ptr;
        }
        ptr = ptr->next;
    }
    return ptr; //must be null
}

Node* List_delete(Node* head, int val){
    printf("Delete %d\n",val);
    Node* p = head;
    if(p == NULL){
        return p;
    }
    //delete first node
    if((p->value) == val){
        p = p->next;
        free(head);
        return p;
    }
    //not deleting the first node
    Node* q = p->next;
    while((q != NULL) && ((q->value) != val)){
        p = p->next; 
        q = q->next;
    }
    if(q != NULL){
        p->next = q->next;
        free(q);
    }
    //Recursively
    // head->next = List_delete(head->next,val);
    return head;
}

void List_print(Node* head){
    printf("Print the whole list\n");
    while(head!=NULL){
        printf("%d\t",head->value);
        head = head->next;
    }
}

void List_destroy(Node* head){
    while(head != NULL){
        Node*p = head->next;
        free(head);
        head = p;
    }
}

