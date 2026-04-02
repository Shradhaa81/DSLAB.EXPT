#include<stdio.h> 
#include<stdlib.h> 
struct node{ 
    int data; 
    struct node *next; 
}; 
struct node *front=NULL,*rear=NULL; 
void enqueue(){ 
    struct node *temp; 
    int x; 
    temp=(struct node*)malloc(sizeof(struct node)); 
    printf("Enter value: "); 
    scanf("%d",&x); 
    temp->data=x; 
    temp->next=NULL; 
    if(rear==NULL){ 
        front=rear=temp; 
        return; 
    } 
    rear->next=temp; 
    rear=temp; 
} 
void dequeue(){ 
    struct node *temp; 
    if(front==NULL){ 
        printf("Queue Underflow\n"); 
        return; 
    } 
    temp=front; 
    front=front->next; 
    if(front==NULL) 
        rear=NULL; 
    free(temp); 
} 
void display(){ 
    struct node *temp=front; 
    while(temp!=NULL){ 
        printf("%d ",temp->data); 
        temp=temp->next; 
    } 
    printf("\n"); 
} 
int main(){ 
    int ch; 
    while(1){ 
        printf("1.Enqueue 2.Dequeue 3.Display 4.Exit\n"); 
        scanf("%d",&ch); 
        switch(ch){ 
            case 1: enqueue(); break; 
            case 2: dequeue(); break; 
            case 3: display(); break; 
            case 4: exit(0); 
        } 
    }  }
