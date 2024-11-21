#include <stdio.h>
#include <stdlib.h>

struct stack {
    int data;
    struct stack *next;
};

int isEmpty(struct stack *stack){
    if(stack == NULL){
        return 1;
    }
    return 0;
}

int isFull(struct stack *stack){
    struct stack *p = (struct stack*)malloc(sizeof(struct stack));
    if(p == NULL){
        return 1;
    }
    return 0;
}

struct node *push(struct stack *top, int data){
    if(isFull(top)){
        printf("Stack Overflow");
    }else{
        struct stack *n = (struct stack*)malloc(sizeof(struct stack));
        n->data = data;
        n->next = top;
        top = n;
        return top;
    }
}

int main(){
    struct stack *top = NULL;
    top = push(top, 10);
}