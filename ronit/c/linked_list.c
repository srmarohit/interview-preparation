
/*
    Brief - This program is to create a linked list 
            Here I'm counting Head as 0th index which don't have any value/data
            Linked list actual Node counting will start from 1. 
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int data;
    struct Node *next_address;
}Node;
    
    
void print_linkedList(Node *head_pointer); 
Node* Insert_Node(Node *Head, int position, int data);
void print_Head(Node *Head_);
Node* Delete_Node(Node *Head, int position);

int main()
{
    int run_again = 0;
    
    
    Node *Head   = (Node*)malloc(sizeof(Node));
    Node *first_node  = (Node*)malloc(sizeof(Node));
    Node *second_node = (Node*)malloc(sizeof(Node));
    
    // Initialize head Node
    Head->next_address = (struct Node*)first_node;
    // Initialize first Node
    first_node->data = 1;
    first_node->next_address = (struct Node*)second_node;
    // Initialize second Node
    second_node->data = 2;
    second_node->next_address = 0;
    
    do{
        
        print_linkedList(Head);
        Head = (Node*)Insert_Node(Head, 1, 11);
        Head = ( Node*)Insert_Node(Head, 2, 12);
        Head = ( Node*)Insert_Node(Head, 3, 13);
        Head = ( Node*)Insert_Node(Head, 4, 14);
        Head = ( Node*)Insert_Node(Head, 5, 15);
        Head = Delete_Node(Head, 3);
        printf("Linked List After insertion\r\n");
        print_linkedList(Head);
        printf("\n");
        printf("Do you run program again\r\n");
        scanf("%d",&run_again);
    }while(run_again);

    return 0;
}

Node* Delete_Node(Node *Head, int position)
{
    if(position < 1)
    return 0;
    
    Node *tempHead = Head;
    int loop = 1;
    while(loop != position)
    {
        tempHead = tempHead->next_address;
        loop++;
    }
    Node *del_node = tempHead->next_address;
    tempHead->next_address = del_node->next_address;
    
    return Head;
    
}

Node* Insert_Node(Node *Head, int position, int data)
{
    /* since we count Node positions from 1 */
    if(position < 1)
     return 0;
    Node *newNode = (Node*)malloc(sizeof(Node));
    Node *tempHead = Head;

    
    newNode->data = data;
    int loop = 1;
    while(loop != position)
    {
        tempHead = (Node*)tempHead->next_address;
        loop++;
    }
    
    newNode->next_address  = tempHead->next_address;
    tempHead->next_address = (struct Node*)newNode;
    
    
    return Head;
}
 
// Traversal Of the Nodes
void print_linkedList(Node *head_pointer)
{
    int counter = 1;
    // To avoid printing of the head Node data
    if(head_pointer->next_address == 0)
    {
        return;
    }
    else
    {
        head_pointer = (Node*)head_pointer->next_address;
    }
    while(head_pointer != 0)
    {
        printf("Node %d value - %d\r\n", counter++, head_pointer->data);
        head_pointer = (Node*)head_pointer->next_address;
    }
}
