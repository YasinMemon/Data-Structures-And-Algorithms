#include <stdio.h>
#include <stdlib.h>

struct stack {
    int data;
    struct stack *next;
};

void display(struct stack *head) {
    int i = 0;
    while (head != NULL) {
        printf("(%d) %d\n", i, head->data);
        i++;
        head = head->next;
    }
}

int isEmpty(struct stack *stack) {
    return stack == NULL;
}

int isFull(struct stack *stack) {
    struct stack *p = (struct stack *)malloc(sizeof(struct stack));
    if (p == NULL) {
        return 1;
    }
    free(p);
    return 0;
}

struct stack *push(struct stack *top, int data) {
    if (isFull(top)) {
        printf("Stack Overflow\n");
        return top;
    } else {
        struct stack *n = (struct stack *)malloc(sizeof(struct stack));
        n->data = data;
        n->next = top;
        top = n;
        printf("%d is pushed into the stack\n", data);
        return top;
    }
}

struct stack *pop(struct stack *top, int *poppedValue) {
    if (isEmpty(top)) {
        printf("Stack Underflow\n");
        return top;
    } else {
        struct stack *n = top;
        *poppedValue = top->data;
        top = top->next;
        free(n);
        return top;
    }
}

int peek(int pos, struct stack *top) {
    struct stack *n = top;
    int i;
    for (i = 0; i < pos - 1 && n != NULL; i++) {
        n = n->next;
    }
    if (n != NULL) {
        return n->data;
    } else {
        return -1; // Return -1 if the position is invalid
    }
}

int main() {
    struct stack *top = NULL;
    int poppedValue;

    top = push(top, 10);
    top = push(top, 20);
    top = push(top, 30);

    // Pop an element and update top
    top = pop(top, &poppedValue);
    printf("%d was popped out\n", poppedValue);

    display(top);

    int i;
    for (i = 1; i <= 2; i++) {
        printf("Element at position %d is %d\n", i, peek(i, top));
    }

    return 0;
}
