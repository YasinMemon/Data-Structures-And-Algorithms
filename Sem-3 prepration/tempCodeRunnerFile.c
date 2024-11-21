#include <stdio.h>
#include <stdlib.h>

struct queue {
    int front;
    int rear;
    int size;
    int *arr;
};

int isFull(struct queue *q){
    return (q->rear+1)%q->size == q->front;
}

void enqueue(struct queue *q, int ele){
    if(isFull(q)){
        printf("queue is full\n");
    }else{
        q->rear = (q->rear+1)%q->size;
        q->arr[q->rear] = ele;
        printf("%d is equed\n", ele);
    }
}

int main(){
    struct queue q;

    q.front = 0;
    q.rear = -1;
    q.size = 5;
    q.arr = (int*) malloc(q.size * sizeof(int));

    enqueue(&q, 23);

    return 0;
}