#include <stdio.h>
#include <stdlib.h>

struct queue {
    int front;
    int rear;
    int size;
    int *arr;
};

int isFull(struct queue *q){
    if((q->rear+1)%q->size == q->front){
        return 1;
    }
    return 0;
}

int isEmpty(struct queue *q){
    if(q->front == -1){
        return 1;
    }
    return 0;
}

void enqueue(struct queue *q, int val){
    if(isFull(q)){
        printf("Queue is Full");
    }else{
        q->rear = (q->rear+1)%q->size;
        q->arr[q->rear] = val;
        printf("%d is equeued in to queue\n",val);
    }
}

void dequeue(struct queue *q){
    int x = -1;
    if(isEmpty(q)){
        printf("Queue is empty");
    }else{
        q->front = (q->front+1)%q->size;
        x = q->arr[q->front];
        printf("%d is dequed from the queue\n",x);
    }
}

int main(){
    struct queue q;
    q.size = 5;
    q.front = q.rear = -1;
    q.arr = (int*) malloc(q.size * sizeof(int));

    enqueue(&q,23);
    enqueue(&q,21);
    enqueue(&q,25);
    enqueue(&q,2);
    enqueue(&q,22);
    enqueue(&q,22);
    enqueue(&q,22);
    enqueue(&q,22);
    enqueue(&q,22);

    printf("\n");

    dequeue(&q);
    dequeue(&q);
    dequeue(&q);
}