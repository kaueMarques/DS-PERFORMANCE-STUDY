#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};

int countNodes(struct node *root)
{
    int count = 0;
    struct node *ptr = root;

    while (ptr != NULL)
    {
        count++;
        ptr = ptr->link;
    }

    printf("nodes: %d\n", count);
    return count;
}

void addNode(struct node *root, int elemento)
{
    struct node *newNode = malloc(sizeof(struct node));
    struct node *ptr = root;

    newNode->data = elemento;
    newNode->link = NULL; 
    
    
    while (ptr->link != NULL)
    {
        ptr = ptr->link;
    }

    ptr->link = newNode;
    printf("new node: %d\n", elemento);
}

int main()
{
    printf("Linked List\n\n");

    struct node *root = malloc(sizeof(struct node));
    root->data = 1;
    root->link = NULL;

    struct node *current = malloc(sizeof(struct node));
    current->data = 2;
    current->link = NULL;
    root->link = current;

    struct node *current2 = malloc(sizeof(struct node));
    current2->data = 3;
    current2->link = NULL;
    current->link = current2;

    struct node *current3 = malloc(sizeof(struct node));
    current3->data = 4;
    current3->link = NULL;
    current2->link = current3;

    countNodes(root);

    addNode(root, 90);

    countNodes(root);

    printf("\n\n");
    return 0;
}
