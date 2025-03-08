#include "linked_list.h"

void
insert (node **head, int data)
{
    node *new;

    new = (node *) malloc (sizeof(node));
    if (new == NULL) {
        printf("Memory allocation error");
        exit (0);
    }
    new->data = data;
    new->next = *head;
    *head = new;
}

void
print_list (node *head)
{
    while (head != NULL) {
       printf("%d", head->data);
       head = head->next;
   }
}

void
reverse (node **head)
{
    node *prev = NULL;
    node *current = *head;
    node *next;
    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    *head = prev;
}

void main ()
{
    int i;
    node *head = NULL;

    for (i = 5; i >= 1; i--) {
        insert(&head, i);
    }

    print_list(head);
    reverse(&head);
    print_list(head);
}

    
