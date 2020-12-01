// Example linked list
#include <stdio.h>
#include <stdlib.h>
struct node{
    int val;
    struct node * next;
};

void push(struct node * head, int val){
    struct node * current = head;
    while(current->next != NULL){
        current = current->next;
    }
    current->next = malloc(sizeof(struct node));
    current->next->val = val;
    current->next->next = NULL;
}

int pop(struct node **head){
    int retval = -1;
    struct node * next_node = NULL;
    if(*head == NULL){
        return -1;
    }
    next_node = (*head)->next;
    retval = (*head)->val;
    free(*head);
    *head = next_node;
    return retval;
}

void print_list(struct node * head){
    printf("Printing List...\n");
    struct node * current = head;
    while(current != NULL){
        printf("%d\n", current->val);
        current = current->next;
    }
}

int main()
{
    struct node * head = NULL;
    head = malloc(sizeof(struct node));
    head->val = 1;
    head->next = malloc(sizeof(struct node));
    head->next->next = NULL;
    
    push (head, 3);
    push (head, 4);
    push (head, 5);
    print_list(head);
    printf("-----\n");
    pop(&head);
    pop(&head);
    pop(&head);
    print_list(head);

    return 0;
}

