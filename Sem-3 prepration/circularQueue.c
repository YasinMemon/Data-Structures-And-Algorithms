#include <stdio.h>
#include <stdlib.h>

struct queue {
    int front;
    int rear;
    int size;
    int count;
    int *arr;
};

int isFull(struct queue *q){
    if (q->count == q->size)
    {
        return 1;
    }
    return 0;
}

int isEmpty(struct queue *q){
    if(q->count == 0){
        return 1;
    }
    return 0;
}

void enqueue(struct queue *q, int ele){
    if(isFull(q)){
        printf("\nqueue is full\n");
    }else{
        q->rear = (q->rear+1)%q->size;
        q->arr[q->rear] = ele;
        q->count++;
        printf("%d is equed\n", ele);
    }
}

int dequeue(struct queue *q){
    if(isEmpty(q)){
        printf("queue is empty");
    }else{
        int val = q->arr[q->front];
        q->front = (q->front+1)%q->size;
        q->count--;
        return val;
    }
}

int main(){
    struct queue q;

    q.front = 0;
    q.rear = -1;
    q.count = 0;
    q.size = 3;
    q.arr = (int*) malloc(q.size * sizeof(int));

    enqueue(&q, 23);
    enqueue(&q, 34);
    enqueue(&q, 45);
    enqueue(&q, 56);

    int i;
    int val;
    for(i=0;i<5;i++){
        val = dequeue(&q);
        if(val != -1){
            printf("%d is dequed\n", val);
        }
    }
    printf("\n");

    enqueue(&q, 44);
    enqueue(&q, 435);
    enqueue(&q, 435);
    return 0;
}