#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* left;
    struct node* right;
};

struct node* newNode(int data){
    struct node* node = malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return(node);
}

struct node* insert(struct node* node, int data){
    if(node == NULL){
        return (newNode(data));
    }
    else{
        if(data <= node->data)
            node->left = insert(node->left, data);
        else
            node->right = insert(node->right, data);
        return(node);
    }
}

void traverse(struct node *top)
{
    struct node *p = top;
    if(p != 0){
        traverse(p->left);
        printf("data = %d\n", p->data);
        traverse(p->right);
    }
}

int search(struct node* node, int target){
    if(node == NULL){
        return 0;
    }
    else{
        if(target == node->data)
            return 1;
        else{
            if(target < node->data)
                return(search(node->left, target));
            else
                return(search(node->right, target));
        }
    }
}

int main()
{
    struct node *root;
    root = insert(root, 1);
    root = insert(root, 2);
    root = insert(root, 3);
    traverse(root);
    printf("%d\n", search(root, 1));
    printf("%d\n", search(root, 3));
    printf("%d\n", search(root, 5));
    printf("%d\n", search(root, 9));

    return 0;
}
