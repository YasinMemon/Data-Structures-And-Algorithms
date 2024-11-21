#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};
struct node *front;
struct node *rare;

void enqueue(int data){
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = NULL;

    if(front == NULL && rare == NULL){
        front = rare = newNode;
        printf("%d is equeued to the queue\n",data);        
    }else{
        rare->next = newNode;
        rare = newNode;
        printf("%d is equeued to the queue\n",data);
    }
}

void dequeue(){
    struct node *temp = front;
    int element = front->data;
    front = front->next;
    free(temp);
    printf("%d is dequed from the queue\n",element);
}

void display(){
    struct node *temp;
    if(front == NULL && rare == NULL){
        printf("There is no data available");
    }
        temp = front;
    while(temp != NULL){
        printf("%d\n",temp->data);
        temp = temp->next;
    }
}

int main(){
    enqueue(32);
    enqueue(34);
    enqueue(55);
    enqueue(42);
    display();

    dequeue();
    dequeue();

    display();
}