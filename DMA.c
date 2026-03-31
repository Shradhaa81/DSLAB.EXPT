#include <stdio.h> 
#include <stdlib.h> 
int largest(int a[], int n) { 
    int max = a[0]; 
    for (int i = 1; i < n; i++) 
        if (a[i] > max) 
            max = a[i]; 
    return max; 
} 
int main() { 
    int *a, n; 
    scanf("%d", &n); 
    a = malloc(n * sizeof(int)); 
    for (int i = 0; i < n; i++) 
        scanf("%d", &a[i]); 
    prin ("%d", largest(a, n)); 
    free(a); 
    return 0; 
} 
