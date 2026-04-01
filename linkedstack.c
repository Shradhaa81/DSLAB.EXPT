#include<stdio.h> 
#include<stdlib.h> 
struct node{ 
    int data; 
    struct node *next; 
}; 
struct node *top=NULL; 
void push(){ 
    struct node *temp; 
    int x; 
    temp=(struct node*)malloc(sizeof(struct node)); 
    prin ("Enter value: "); 
    scanf("%d",&x); 
    temp->data=x; 
    temp->next=top; 
    top=temp; 
} 
void pop(){ 
    struct node *temp; 
    if(top==NULL){ 
        prin ("Stack Underflow\n"); 
        return; 
    } 
    temp=top; 
    top=top->next;  
    free(temp); 
} 
void display(){ 
    struct node *temp=top; 
    while(temp!=NULL){ 
        prin ("%d ",temp->data); 
        temp=temp->next; 
    } 
    prin ("\n"); 
} 
int main(){ 
    int ch; 
    while(1){ 
        prin ("1.Push 2.Pop 3.Display 4.Exit\n"); 
        scanf("%d",&ch); 
        switch(ch){ 
            case 1: push(); break; 
            case 2: pop(); break; 
            case 3: display(); break; 
            case 4: exit(0); 
        } 
    } 
} 
 
 
