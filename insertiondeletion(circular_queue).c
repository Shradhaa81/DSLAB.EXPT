#include <stdio.h> 
#define MAX 5 
int cq[MAX], front=-1, rear=-1; 
void insert(int x){ 
    if((rear+1)%MAX==front) return; 
    if(front==-1) front=rear=0; 
    else rear=(rear+1)%MAX; 
    cq[rear]=x; 
} 
int delete(){ 
    if(front==-1) return -1; 
    int val=cq[front]; 
    if(front==rear) front=rear=-1; 
    else front=(front+1)%MAX; 
    return val; 
} 
void traverse(){ 
    if(front==-1) return; 
    int i=front; 
    while(1){ 
        printf("%d ",cq[i]); 
        if(i==rear) break; 
        i=(i+1)%MAX; 
    } 
} 
int main(){ 
    int ch,x; 
    while(1){ 
        scanf("%d",&ch); 
        if(ch==1){ scanf("%d",&x); insert(x); } 
        else if(ch==2){ delete(); } 
        else if(ch==3){ traverse(); } 
        else break; 
    } 
    return 0; 
} 
