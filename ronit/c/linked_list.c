#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int data;
    struct Node *next_address;
}Node;
    
    
void print_linkedList(Node *head_pointer);    
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
        
        printf("\n");
        printf("Do you run program again\r\n");
        scanf("%d",&run_again);
    }while(run_again);

    return 0;
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
