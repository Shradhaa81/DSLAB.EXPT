#include <stdio.h> 
#define MAX 100 
int queue[MAX], front=0, rear=0; 
 
void insert(int x){ 
    if(rear==MAX) return; 
    queue[rear++]=x; 
} 
int delete(){ 
    if(front==rear) return -1; 
    return queue[front++]; 
} 
void traverse(){ 
    for(int i=front;i<rear;i++) prin ("%d ",queue[i]); 
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