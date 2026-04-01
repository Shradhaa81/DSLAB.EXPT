#include <stdio.h> 
#define MAX 100 
 
int stack[MAX], top=-1; 
 
void push(int x){ 
    if(top==MAX-1) return; 
    stack[++top]=x; 
} 
 
int pop(){ 
    if(top==-1) return -1; 
    return stack[top--]; 
} 
 
void display(){ 
    for(int i=top;i>=0;i--) prin ("%d ",stack[i]); 
} 
 
int main(){ 
    int ch,x; 
    do{ 
        scanf("%d",&ch); 
        if(ch==1){ scanf("%d",&x); push(x); } 
        if(ch==2){ pop(); } 
        if(ch==3){ display(); } 
    }while(ch!=4); 
    return 0; 
} 
