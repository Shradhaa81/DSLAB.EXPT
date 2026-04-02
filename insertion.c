#include <stdio.h> 
void display(int a[], int n) { 
    for (int i = 0; i < n; i++) 
        printf("%d ", a[i]); 
    printf("\n"); 
} 
void insert(int a[], int n, int ele, int pos) { 
    for (int i = n; i > pos; i--) 
        a[i] = a[i - 1]; 
    a[pos] = ele; 
    display(a, n + 1); 
} 
int main() { 
    int a[50], n, ele, pos; 
    scanf("%d", &n); 
    for (int i = 0; i < n; i++) 
        scanf("%d", &a[i]); 
    scanf("%d", &ele); 
    scanf("%d", &pos); 
    insert(a, n, ele, pos); 
    return 0; 
}  
