#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *left;
    struct node *right;
};

struct node* createNode(int data){
    struct node *n;
    n = (struct node*) malloc(sizeof(struct node));

    n->left = NULL;
    n->right = NULL;
    n->data = data;

    return n;
}

void preOrder(struct node* root){
    if(root != NULL){
        printf("%d ",root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}

void postOrder(struct node* root){
    if(root != NULL){
        postOrder(root->left);
        postOrder(root->right);
        printf("%d ", root->data);
    }
}

void inOrder(struct node* root){
    if(root != NULL){
        inOrder(root->left);
        printf("%d ",root->data);
        inOrder(root->right);
    }
}

int search(struct node *root, int element){
    if(root == NULL){
        return 0;
    }

    if(root->data == element){
        return 1;
    }

    if(element < root->data){
        return search(root->left, element);
    }else{
        return search(root->right, element);
    }
}

int main(){
    struct node *p = createNode(4);
    struct node *p1 = createNode(1);
    struct node *p2 = createNode(5);
    struct node *p3 = createNode(6);
    struct node *p4 = createNode(2);

    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;

    printf("Tree in preorder\n");
    preOrder(p);

    printf("\nTree in postOrder\n");
    postOrder(p);

    printf("\nTree in inOrder\n");
    inOrder(p);

    int element = 6;
    if(!search(p, element)){
        printf("\nElement not found");
    }else{
        printf("\nelement found");
    }

    return 0;
}