#include <stdio.h>
#include <stdlib.h>

struct queue {
    int f;
    int r;
    int size;
    int *arr;
};

int isFull(struct queue *q){
    if(q->r == q->size){
        return 1;
    }
    return 0;
}

int isEmpty(struct queue *q){
    if(q->f == q->r){
        return 1;
    }
    return 0;
}

void enqueue(struct queue *q, int data){
    if(isFull(q)){
        printf("Your queue is full");
    }else{
        q->r++;
        q->arr[q->r] = data;
        printf("%d is equed into queue\n",data);
    }
}

void dequeue(struct queue *q){
    if(isEmpty(q)){
        printf("Nothing to dequeue");
    }else{
        q->f++;
        int element = q->arr[q->f];
        // free(q->arr[q->f]);
        printf("%d is dequeued from the queue\n",element);
    }
}

int main(){
    struct queue q;
    q.f = q.r = -1;
    q.size = 5;
    q.arr = (int*)malloc(q.size * sizeof(int));
    enqueue(&q, 43);
    enqueue(&q, 34);
    enqueue(&q, 23);
    enqueue(&q, 45);
    enqueue(&q, 21);
    enqueue(&q, 2);
    enqueue(&q, 2);

    printf("\n");

    dequeue(&q);
    dequeue(&q);
    dequeue(&q);

    enqueue(&q,9);

}