#include <stdio.h> 
void display(int a[], int n) { 
    for (int i = 0; i < n; i++) 
        printf ("%d ", a[i]); 
    printf("\n"); 
} 
int del(int a[], int n, int pos) { 
    for (int i = pos; i < n - 1; i++) 
        a[i] = a[i + 1]; 
    display(a, n - 1); 
    return n - 1; 
} 
int main() { 
    int a[50], n, pos; 
    scanf("%d", &n); 
    for (int i = 0; i < n; i++) 
        scanf("%d", &a[i]); 
    scanf("%d", &pos); 
    del(a, n, pos); 
    return 0; 
} 
 
