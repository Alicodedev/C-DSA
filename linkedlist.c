#include <stdio.h>
#include <stdlib.h>

// Structure for a linked list node
typedef struct node
{
    int data;
    struct node *next;
    
}
node;

int main()
{   
    
    struct node *head, *newnode; // defining head of the linked list
    int num_node, node_data;// num_node used as a loop variable to store input amount of nodes in the linked list 
    printf("input the amount of nodes: ");
    scanf("%d",&num_node);
    
    for(int i = 0; i < num_node; i++)
    {
       //int node_data;
       printf("input node %d: ",i + 1);
       scanf("%d",&node_data);
    
       newnode = malloc(sizeof(struct node)); // allocate new memory for each new node every iteration
       
       //---------------This is the core section of LINKING THE NODES------------------
       newnode->data = node_data; // you're assigning the newnode the input value which will be stored in data field of the node
       newnode->next = head; // assigning the newnodes memory address to head the origin of the link lists(orgin of all nodes)
       
       head = newnode; // Update the head pointer to point to the new node (essnential the final method of intersting the node in place)
       //------------------------------------------------------------------------------
    
   
    }
    
    struct node *temp = head; 
    while(temp != NULL)
        {
            printf("Nodes and Data: ");
            printf("Node: %p, Data: %d\n", temp, temp->data);
            temp = temp->next;
        }
    

    return 0;
}