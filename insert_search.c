#include<stdio.h> 
#include<stdlib.h> 
struct node{ 
    int data; 
    struct node *next; 
}; 
struct node *head=NULL; 
void insert_pos(){ 
    struct node *temp,*ptr; 
    int x,pos,i; 
    printf("Enter value and posi on: "); 
    scanf("%d%d",&x,&pos); 
    temp=(struct node*)malloc(sizeof(struct node)); 
    temp->data=x; 
    if(pos==1){ 
        temp->next=head; 
        head=temp; 
        return; 
    } 
    ptr=head; 
    for(i=1;i<pos-1 && ptr!=NULL;i++) 
        ptr=ptr->next; 
    if(ptr==NULL){ 
        printf ("Invalid posi on\n"); 
        return; 
    } 
    temp->next=ptr->next; 
    ptr->next=temp; 
} 
void search(){ 
    struct node *temp=head; 
    int key,pos=1; 
    printf ("Enter value to search: "); 
    scanf("%d",&key); 
    while(temp!=NULL){ 
        if(temp->data==key){ 
            prin ("Found at posi on %d\n",pos); 
            return; 
        } 
        temp=temp->next; 
        pos++; 
    } 
    printf("Not found\n"); 
} 
void display(){ 
    struct node *temp=head; 
    while(temp!=NULL){ 
        prin ("%d ",temp->data); 
        temp=temp->next; 
    } 
    printf ("\n"); 
} 
 
int main(){ 
    int ch; 
    while(1){ 
        printf ("1.Insert Posi on 2.Search 3.Display 4.Exit\n"); 
        scanf("%d",&ch); 
        switch(ch){ 
            case 1: insert_pos(); break; 
            case 2: search(); break; 
            case 3: display(); break; 
            case 4: exit(0); 
        } 
    } 
} 
