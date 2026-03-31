#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
struct Product { 
    int pno; 
    char name[50]; 
    float cost; 
}; 
void display(struct Product p[], int n) { 
    for (int i = 0; i < n; i++) 
        if (p[i].cost >= 100 && p[i].cost <= 1000) 
            prin ("%d %s %.2f\n", p[i].pno, p[i].name, p[i].cost); 
} 
int main() { 
    struct Product *p; 
    int n; 
    scanf("%d", &n); 
    p = malloc(n * sizeof(struct Product)); 
    for (int i = 0; i < n; i++) { 
        scanf("%d", &p[i].pno); 
        getchar(); 
        fgets(p[i].name, 50, stdin); 
p[i].name[strcspn(p[i].name, "\n")] = 0; 
scanf("%f", &p[i].cost); 
} 
display(p, n); 
free(p); 
return 0; 
}