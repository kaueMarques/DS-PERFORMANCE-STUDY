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
        printf("node element: %d\n", ptr->data);
        printf("memory address:\n%p \n\n", ptr->data, (void *)ptr);
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

    for (int i = 1; i < 10; i++)
    {
        addNode(root, i);
    }

    printf("\n==========\n");
    countNodes(root);

    printf("\n\n");
    return 0;
}
